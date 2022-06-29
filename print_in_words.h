#ifndef TRANSLATION_H
#define TRANSLATION_H

__int32 digit; //знакове число в діапазоні 32-біт

//підключення заголовних файлів
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <locale.h>

/**
* Розділити введене число на окремі цифри
*
* @param digit введене число
* @param arr масив окремих цифр
* @return Не повертає значення
*/
void digits_arr(int digit, int arr[]);

/**
* Вивід числа словами
*
* @param arr масив окремих цифр
* @return Не повертає значення
*/
void in_words(int digit, const int arr[]);

#endif