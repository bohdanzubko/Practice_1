#ifndef TRANSLATION_H
#define TRANSLATION_H

__int32 digit; //������� ����� � ������� 32-��

//���������� ���������� �����
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <locale.h>

/**
* �������� ������� ����� �� ����� �����
*
* @param digit ������� �����
* @param arr ����� ������� ����
* @return �� ������� ��������
*/
void digits_arr(int digit, int arr[]);

/**
* ���� ����� �������
*
* @param arr ����� ������� ����
* @return �� ������� ��������
*/
void in_words(int digit, const int arr[]);

#endif