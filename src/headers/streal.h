
#include<stdbool.h>
#ifndef ST_REAL_H
#define ST_REAL_H
#include <math.h>

void st_init(int maxSize); // Начать работу (вх: цел
void st_terminate();    // Закончить работу
void st_push(double x); // Добавить эл-т (вх: вещ x)
double st_pop();        // Взять элемент: вещ
double st_top();        // Вершина стека: вещ
int st_size();          // Текущий размер стека: цел
bool st_empty();        // Стек пуст? : лог
int st_maxSize();       // Макс. размер стека: цел
bool st_freeSpace();    // Есть свободное место? : лог
void st_clear();        // Удалить все элементы
double st_elementAt(int i); // Элемент стека на
int IsDelimeter(char c);// Ищет символы-разделители
int IsOperator(char c);
int Priority(char s);                        
#endif

#ifndef ST_REAL_H
#define ST_REAL_H
. . .
#endif
