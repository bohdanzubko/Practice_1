#include "print_in_words.h" //заголовний файл

void digits_arr(int digit, int arr[]) { //розд≥лити введене число на окрем≥ цифри
	int d = digit; //введене число
	int i = 9; //≥ндекс масиву
	while(i >= 0) { //цикл заповненн€ масиву окремими цифрами
		if (!d) //€кщо введене число = 0
			break; //завершенн€ циклу
		if (d % 10 > 0) //€кщо залишок в≥д д≥ленн€ числа на 10 б≥льше за 0
			arr[i] = d % 10; //додаванн€ його до масиву
		else //в ≥ншому раз≥
			arr[i] = (d % 10) * -1; //додаванн€ до масиву отриманого числа, але позитивного
		d /= 10; //д≥ленн€ числа на 10
		i--; //зменшенн€ ≥ндексу
	}
	return; //завершенн€ функц≥њ
}

void in_words(int digit, const int arr[]) { //вив≥д числа словами
	bool not_null = false; //зм≥нна нульового числа
	if (digit < 0) //€кщо введене число менше за 0
		printf("мiнус ");
	for (int i = 0; i < 10; i++) { //цикл виводу усього числа словами
		if (arr[i] == 0 && !not_null) { //€кщо поточний елемент = 0 ≥ число нульове
			not_null = true; //число не нульове
			if (arr[0] != 0) //€кщо це перший елемент
				i--; //зменншенн€ ≥ндексу
			continue; //пропустити т≥ло циклу
		}
		if (i == 0) { //€кщо ≥ндекс елементу = 0
			switch (arr[i]) { //виб≥р числа
			case 1: printf("один "); break;
			case 2: printf("два "); break;
			}
			if(arr[i] == 0) //€кщо цей елемент = 0 
				printf(""); 
			else if (arr[i] == 1) //€кщо цей елемент = 1
				printf("мiль€рд ");
			else //в ≥ншому раз≥
				printf("мiль€рди ");
		}
		if (i == 1 || i == 4 || i == 7) { //€кщо ≥ндекс елменту = 1, або 4, або 7
			switch (arr[i]) { //виб≥р
			case 1: printf("сто "); break;
			case 2: printf("двiстi "); break;
			case 3: printf("триста "); break;
			case 4: printf("чотириста "); break;
			case 5: printf("п'€тсот "); break;
			case 6: printf("шiстсот "); break;
			case 7: printf("сiмсот "); break;
			case 8: printf("вiсiмсот "); break;
			case 9: printf("дев'€тсот "); break;
			}
			if (arr[i + 1] == 0 && arr[i + 2] == 0) { //€кщо наступн≥ два елементи нул≥
				if (arr[i] == 0) //€кщо елемент = 0
					printf("");
				else if(i == 1) //€кщо ≥ндекс елементу = 1
					printf("мiльйонiв ");
				else if(i == 4) //€кщо ≥ндекс елементу = 4
					printf("тис€ч ");
			}
		}
		else if (i == 2 || i == 5 || i == 8) { //€кщо ≥ндекс елменту = 2, або 5, або 8
			if (arr[i] == 1) { //€кщо елемент = 1
				switch (arr[i + 1]) { //виб≥р
				case 0: printf("дес€ть "); break;
				case 1: printf("одинадц€ть "); break;
				case 2: printf("дванадц€ть "); break;
				case 3: printf("тринадц€ть "); break;
				case 4: printf("чотирнадц€ть "); break;
				case 5: printf("п'€тнадц€ть "); break;
				case 6: printf("шiстнадц€ть "); break;
				case 7: printf("сiмнадц€ть "); break;
				case 8: printf("вiсiмнадц€ть "); break;
				case 9: printf("дев'€тнадц€ть "); break;
				}
				if (arr[i + 2] == 0 || arr[i] == 0 || arr[i + 2] != 0) { //€кщо елемент = 0
				    if(i == 2) //€кщо ≥ндекс елементу = 2
						printf("мiльйонiв ");
					else if(i == 5) //€кщо ≥ндекс елементу = 5
						printf("тис€ч ");
				}
				else if (arr[i - 1] == 0) { //€кщо наступний елемент = 0
					if (i == 1) //€кщо ≥ндекс елементу = 1
						printf("мiльйонiв ");
					else if (i == 5) //€кщо ≥ндекс елементу = 5
						printf("тис€ч ");
				}
			}
			else if (arr[i] != 1) { //€кщо елемент не = 1
				switch (arr[i]) { //виб≥р
				case 2: printf("двадц€ть "); break;
				case 3: printf("тридц€ть "); break;
				case 4: printf("сорок "); break;
				case 5: printf("п'€тдес€т "); break;
				case 6: printf("шiстдес€т "); break;
				case 7: printf("сiмдес€т "); break;
				case 8: printf("вiсiмдес€т "); break;
				case 9: printf("дев'€носто "); break;
				}
				if(arr[i + 1] == 0) { //€кщо наступний елемент = 0
					if (arr[i] == 0) //€кщо елемент = 0
						printf("");
					else if (i == 2) //€кщо ≥ндекс елементу = 2
						printf("мiльйонiв ");
					else if (i == 5) //€кщо ≥ндекс елементу = 5
						printf("тис€ч ");
				}
				else { //в ≥ншому раз≥
					switch (arr[i + 1]) { //виб≥р
					case 1: {
						if (i + 1 == 6) //€кщо наступний елемент п≥д ≥ндексом 6
							printf("одна ");
						else //в ≥ншому раз≥
							printf("один ");
					} break;
					case 2: {
						if (i + 1 == 6) //€кщо наступний елемент п≥д ≥ндексом 6
							printf("двi ");
						else //в ≥ншому раз≥
							printf("два ");
					} break; 
					case 3: printf("три "); break;
					case 4: printf("чотири "); break;
					case 5: printf("п'€ть "); break;
					case 6: printf("шiсть "); break;
					case 7: printf("сiм "); break;
					case 8: printf("вiсiм "); break;
					case 9: printf("дев'€ть "); break;
					}
					if (i == 2) { //€кщо ≥ндекс елементу = 2
						if (arr[i + 1] == 0) //€кщо наступний елемент = 0
							printf("");
						else if (arr[i + 1] == 1) //€кщо наступний елемент = 1
							printf("мiльйон ");
						else if (arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4) //€кщо наступний елемент = 2, 3 або 4
							printf("мiльйони ");
						else //в ≥ншому раз≥
							printf("мiльйонiв ");
					}
					else if (i == 5) { //€кщо ≥ндекс елементу = 5
						if (arr[i + 1] == 0) //€кщо наступний елемент = 0
							printf("");
						else if (arr[i + 1] == 1) //€кщо наступний елемент = 1
							printf("тис€ча ");
						else if (arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4) //€кщо наступний елемент = 2, 3 або 4
							printf("тис€чi ");
						else
							printf("тис€ч ");
					}
				}
			}
		}
	}
}