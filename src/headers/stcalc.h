
#ifndef STCALC_H
#define STCALC_H

static void onAdd();
static void onSub();
static void onMul();
static void onDiv();
void onPop();     // Удалить вершину стека
static void onClear();   // Очистить стек
static void display();   // Напечатать вершину стека
static void onShow();    // Напечатать содержимое стека
static void printHelp(); // Напечатать подсказку           
void onPush( char* s);   // Добавить число в стек(вх: текстовая запись числа)

#endif
