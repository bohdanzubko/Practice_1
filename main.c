/**
* @file Practice_1
* @author Зубко Б.Р., гр. 515, варіант 25
* @date 28 червня 2022
* @brief Практика
*
* Розробити програму, що переводить ціле число в текст українською мовою. 
*/

#include "print_in_words.h" //заголовний файл

int main() {
	setlocale(LC_CTYPE, "Ukr"); //зміна кодової таблиці символів
	int arr[10] = { 0 }; //масив окремих цифр
	long long int input_digit;
	repeat: printf("Введiть число: "); //запрошення до вводу
	scanf_s("%lld", &input_digit); //ввід
	if (input_digit < INT_MIN || input_digit > INT_MAX) { //перевірка на діапазон введеного числа, що відвповідає діапазону типу __int32
		printf("Невiрний ввiд!\n"); //повідомлення
		goto repeat; //повторення
	}
	digit = input_digit; //введене число
	digits_arr(digit, arr); //сворення масиву з окремих цифр
	printf("%d -> ", digit); //вивід
	in_words(digit, arr); //виклик функції виводу введеного числа словами
	return 0; //завершення
}