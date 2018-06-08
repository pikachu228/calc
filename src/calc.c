#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "streal.h" // Интерфейс исполнителя "стек"
#include "in.h"

int main() {
    char line[256]; // Буфер для ввода строки
    int linelen;    // Длина строки
    char str_in[256];
    char str_out[256];
    char *sep = " ";
    char *istr;
    int i=0;
    st_init(1024);  // Стек.начать работу(1024) 
    Help();    // Напечатать подсказку
    while (true) {
        printf ("введи выражение\n");
        fgets(str_in, 100, stdin);
        linelen = strlen(str_in); // длина строки
    if (linelen == 0)
            continue;
    if (strcmp(str_in, "quit") == 0) {
        printf("завершить работу");
            break;// Завершить работу
    } 
    else {
        convertor( str_in, str_out);
        istr = strtok(str_out,sep);
    while (istr != NULL) {
        stcalc(istr);
        istr = strtok(NULL, sep);
    }  
    }
    }
}
    void display() {
        if (!st_empty()) {
            printf("=%lf\n", st_top());
        } 
        else {
           printf("stack empty\n");
        }
    }
    void Help() {
        printf(
        "    Calculator commands:\n"
        "    +, -, *, /  Ariphmetic operations\n"
        "    quit        Exit\n"
        );
    }
    
    int string_cmp(char* s1, char* s2) {
    int i, flg = 0;
    for(i=0;(s1[i]==s2[i]) && s1[i]!='\0' && s2[i]!='\0';i++);
    if(s1[i]<s2[i]) flg=-1;
    else if(s1[i]>s2[i])flg=1;
    return flg;	
    }
    int delim(char* str_out) {
    char *sep = " ";
    char *istr;
    printf("Исходная строка: %s\n", str_out);
    printf("Результат разбиения:\n");
    istr = strtok(str_out,sep);
        return 0;
    }
