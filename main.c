/**
* @file Practice_1
* @author ����� �.�., ��. 515, ������ 25
* @date 28 ������ 2022
* @brief ��������
*
* ��������� ��������, �� ���������� ���� ����� � ����� ���������� �����. 
*/

#include "print_in_words.h" //���������� ����

int main() {
	setlocale(LC_CTYPE, "Ukr"); //���� ������ ������� �������
	int arr[10] = { 0 }; //����� ������� ����
	long long int input_digit;
	repeat: printf("����i�� �����: "); //���������� �� �����
	scanf_s("%lld", &input_digit); //���
	if (input_digit < INT_MIN || input_digit > INT_MAX) { //�������� �� ������� ��������� �����, �� �������� �������� ���� __int32
		printf("���i���� ��i�!\n"); //�����������
		goto repeat; //����������
	}
	digit = input_digit; //������� �����
	digits_arr(digit, arr); //�������� ������ � ������� ����
	printf("%d -> ", digit); //����
	in_words(digit, arr); //������ ������� ������ ��������� ����� �������
	return 0; //����������
}