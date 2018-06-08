#include "ctest.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int IsDelimeter(char c) {
	if(strchr(" =",c)!=0)
	return 1;
	return 0;
}

CTEST (check, simbol) 
{
char c = '=';
int check, expected;
check = IsDelimeter(c);
expected = 1;
ASSERT_EQUAL(expected, check);
}

int IsOperator(char c) {
    if ( strchr("+-/*()",c)!=0)
        return 1;
        return 0;
    }

CTEST (check, preority)
{
char c = '+';
int check, expected;
check = IsOperator(c);
expected = 1;
ASSERT_EQUAL(expected, check);
}

CTEST (check, preorityone)
{
char c = '-';
int check, expected;
check = IsOperator(c);
expected = 1;
ASSERT_EQUAL(expected, check);
}

CTEST (check, preoritytoo)
{
char c = '/';
int check, expected;
check = IsOperator(c);
expected = 1;
ASSERT_EQUAL(expected, check);
}

CTEST (check, preorityfree)
{
char c = '*';
int check, expected;
check = IsOperator(c);
expected = 1;
ASSERT_EQUAL(expected, check);
}

CTEST (check, preorityfour)
{
char c = '*';
int check, expected;
check = IsOperator(c);
expected = 1;
ASSERT_EQUAL(expected, check);
}

CTEST (check, preorityfife)
{
char c = '(';
int check, expected;
check = IsOperator(c);
expected = 1;
ASSERT_EQUAL(expected, check);
}

CTEST (check, preoritysix)
{
char c = ')';
int check, expected;
check = IsOperator(c);
expected = 1;
ASSERT_EQUAL(expected, check);
}

int Priority(char s) { 
switch(s)
{
case '(': return 1;
case ')': return 1;
case '+': return 2;
case '-': return 2;
case '*': return 3;
case '/': return 3;
default : return 6;
}
}

CTEST (check, prioritet)
{
char c = '(';
int check, expected;
check = Priority(c);
expected = 1;
ASSERT_EQUAL(expected, check);
}

CTEST (check, prthree)
{
char c = '+';
int check, expected;
check = Priority(c);
expected = 2;
ASSERT_EQUAL(expected, check);
}

CTEST (check, prfour)
{
char c = '-';
int check, expected;
check = Priority(c);
expected = 2;
ASSERT_EQUAL(expected, check);
}

CTEST (check, prfive)
{
char c = '*';
int check, expected;
check = Priority(c);
expected = 3;
ASSERT_EQUAL(expected, check);
}

CTEST (check, prsix)
{
char c = '/';
int check, expected;
check = Priority(c);
expected = 3;
ASSERT_EQUAL(expected, check);
}




