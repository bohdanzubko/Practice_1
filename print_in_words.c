#include "print_in_words.h" //заголовний файл

void digits_arr(int digit, int arr[]) { //розділити введене число на окремі цифри
	int d = digit; //введене число
	int i = 9; //індекс масиву
	while(i >= 0) { //цикл заповнення масиву окремими цифрами
		if (!d) //якщо введене число = 0
			break; //завершення циклу
		if (d % 10 > 0) //якщо залишок від ділення числа на 10 більше за 0
			arr[i] = d % 10; //додавання його до масиву
		else //в іншому разі
			arr[i] = (d % 10) * -1; //додавання до масиву отриманого числа, але позитивного
		d /= 10; //ділення числа на 10
		i--; //зменшення індексу
	}
	return; //завершення функції
}

void in_words(int digit, const int arr[]) { //вивід числа словами
	bool not_null = false; //змінна нульового числа
	if (digit < 0) //якщо введене число менше за 0
		printf("мiнус ");
	for (int i = 0; i < 10; i++) { //цикл виводу усього числа словами
		if (arr[i] == 0 && !not_null) { //якщо поточний елемент = 0 і число нульове
			not_null = true; //число не нульове
			if (arr[0] != 0) //якщо це перший елемент
				i--; //зменншення індексу
			continue; //пропустити тіло циклу
		}
		if (i == 0) { //якщо індекс елементу = 0
			switch (arr[i]) { //вибір числа
			case 1: printf("один "); break;
			case 2: printf("два "); break;
			}
			if(arr[i] == 0) //якщо цей елемент = 0 
				printf(""); 
			else if (arr[i] == 1) //якщо цей елемент = 1
				printf("мiльярд ");
			else //в іншому разі
				printf("мiльярди ");
		}
		if (i == 1 || i == 4 || i == 7) { //якщо індекс елменту = 1, або 4, або 7
			switch (arr[i]) { //вибір
			case 1: printf("сто "); break;
			case 2: printf("двiстi "); break;
			case 3: printf("триста "); break;
			case 4: printf("чотириста "); break;
			case 5: printf("п'ятсот "); break;
			case 6: printf("шiстсот "); break;
			case 7: printf("сiмсот "); break;
			case 8: printf("вiсiмсот "); break;
			case 9: printf("дев'ятсот "); break;
			}
			if (arr[i + 1] == 0 && arr[i + 2] == 0) { //якщо наступні два елементи нулі
				if (arr[i] == 0) //якщо елемент = 0
					printf("");
				else if(i == 1) //якщо індекс елементу = 1
					printf("мiльйонiв ");
				else if(i == 4) //якщо індекс елементу = 4
					printf("тисяч ");
			}
		}
		else if (i == 2 || i == 5 || i == 8) { //якщо індекс елменту = 2, або 5, або 8
			if (arr[i] == 1) { //якщо елемент = 1
				switch (arr[i + 1]) { //вибір
				case 0: printf("десять "); break;
				case 1: printf("одинадцять "); break;
				case 2: printf("дванадцять "); break;
				case 3: printf("тринадцять "); break;
				case 4: printf("чотирнадцять "); break;
				case 5: printf("п'ятнадцять "); break;
				case 6: printf("шiстнадцять "); break;
				case 7: printf("сiмнадцять "); break;
				case 8: printf("вiсiмнадцять "); break;
				case 9: printf("дев'ятнадцять "); break;
				}
				if (arr[i + 2] == 0 || arr[i] == 0 || arr[i + 2] != 0) { //якщо елемент = 0
				    if(i == 2) //якщо індекс елементу = 2
						printf("мiльйонiв ");
					else if(i == 5) //якщо індекс елементу = 5
						printf("тисяч ");
				}
				else if (arr[i - 1] == 0) { //якщо наступний елемент = 0
					if (i == 1) //якщо індекс елементу = 1
						printf("мiльйонiв ");
					else if (i == 5) //якщо індекс елементу = 5
						printf("тисяч ");
				}
			}
			else if (arr[i] != 1) { //якщо елемент не = 1
				switch (arr[i]) { //вибір
				case 2: printf("двадцять "); break;
				case 3: printf("тридцять "); break;
				case 4: printf("сорок "); break;
				case 5: printf("п'ятдесят "); break;
				case 6: printf("шiстдесят "); break;
				case 7: printf("сiмдесят "); break;
				case 8: printf("вiсiмдесят "); break;
				case 9: printf("дев'яносто "); break;
				}
				if(arr[i + 1] == 0) { //якщо наступний елемент = 0
					if (arr[i] == 0) //якщо елемент = 0
						printf("");
					else if (i == 2) //якщо індекс елементу = 2
						printf("мiльйонiв ");
					else if (i == 5) //якщо індекс елементу = 5
						printf("тисяч ");
				}
				else { //в іншому разі
					switch (arr[i + 1]) { //вибір
					case 1: {
						if (i + 1 == 6) //якщо наступний елемент під індексом 6
							printf("одна ");
						else //в іншому разі
							printf("один ");
					} break;
					case 2: {
						if (i + 1 == 6) //якщо наступний елемент під індексом 6
							printf("двi ");
						else //в іншому разі
							printf("два ");
					} break; 
					case 3: printf("три "); break;
					case 4: printf("чотири "); break;
					case 5: printf("п'ять "); break;
					case 6: printf("шiсть "); break;
					case 7: printf("сiм "); break;
					case 8: printf("вiсiм "); break;
					case 9: printf("дев'ять "); break;
					}
					if (i == 2) { //якщо індекс елементу = 2
						if (arr[i + 1] == 0) //якщо наступний елемент = 0
							printf("");
						else if (arr[i + 1] == 1) //якщо наступний елемент = 1
							printf("мiльйон ");
						else if (arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4) //якщо наступний елемент = 2, 3 або 4
							printf("мiльйони ");
						else //в іншому разі
							printf("мiльйонiв ");
					}
					else if (i == 5) { //якщо індекс елементу = 5
						if (arr[i + 1] == 0) //якщо наступний елемент = 0
							printf("");
						else if (arr[i + 1] == 1) //якщо наступний елемент = 1
							printf("тисяча ");
						else if (arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4) //якщо наступний елемент = 2, 3 або 4
							printf("тисячi ");
						else
							printf("тисяч ");
					}
				}
			}
		}
	}
}
