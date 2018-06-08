#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "streal.h"
#include "stcalc.h" 

int stcalc(char* line) {

    int linelen;    
        linelen = strlen(line); // длина строки
        if(linelen == 0)
            return 0;
        if (strcmp(line, "+") == 0) {
            onAdd();
        } 
            else if (strcmp(line, "-") == 0) {
                onSub();
            } 
            else if (strcmp(line, "*") == 0) {
                onMul();
            } 
            else if (strcmp(line, "/") == 0) {
                onDiv();
            } 
            else if (strcmp(line, "=") == 0) {
                printf("Результат: ");
                display();
            } 
            else if (isdigit(line[0]) || (linelen > 1 &&
                    (line[0] == '-' || line[0] == '+') &&
                    isdigit(line[1])))
            {
                onPush(line);   // Добавить число в стек
            } 
            else if (strcmp(line, "pop") == 0) {
                onPop();
            } 
            return 0;
}
    static void onAdd() {
        double y, x;
        if (st_size() < 2) {
            printf("Stack depth < 2.\n");
            return;
        }
    y = st_pop();
    x = st_pop();
    st_push(x + y);
    display();
    }

    static void onSub() {
        double y, x;
        if (st_size() < 2) {
        printf("Stack depth < 2.\n");
            return;
    }
    y = st_pop();
    x = st_pop();
    st_push(x - y);
    display();
    }

    static void onMul() {
        double y, x;
        if (st_size() < 2) {
        printf("Stack depth < 2.\n");
            return;
    }
    y = st_pop();
    x = st_pop();
    st_push(x * y);
    display();
    }

    static void onDiv() {
        double y, x;
        if (st_size() < 2) {
        printf("Stack depth < 2.\n");
            return;
    }
    y = st_pop();
    x = st_pop();
    st_push(x / y);
    display();
    }

    void onPush(char* s) {
        double x = atof(s);
        st_push(x);
    }
    void onPop() {
        st_pop();
    }

    void onClear() {
        st_clear();
    } 

    static void display() {
        if(!st_empty()) {
            printf("=%8.3f\n", st_top());
        }
        else {
        printf("stack empty\n");
        }
    }

    static void onShow() {
        int d = st_size(), i = 0;
        printf("Depth of stack = %d.", d);
       if (d > 0)
           printf(" Stack elements:\n");
       else
           printf("\n");
       for (i = 0; i < d; i++) {
           printf("  %lf\n", st_elementAt(i));
       }
    }
