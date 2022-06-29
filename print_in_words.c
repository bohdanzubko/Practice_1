#include "print_in_words.h" //���������� ����

void digits_arr(int digit, int arr[]) { //�������� ������� ����� �� ����� �����
	int d = digit; //������� �����
	int i = 9; //������ ������
	while(i >= 0) { //���� ���������� ������ �������� �������
		if (!d) //���� ������� ����� = 0
			break; //���������� �����
		if (d % 10 > 0) //���� ������� �� ������ ����� �� 10 ����� �� 0
			arr[i] = d % 10; //��������� ���� �� ������
		else //� ������ ���
			arr[i] = (d % 10) * -1; //��������� �� ������ ���������� �����, ��� �����������
		d /= 10; //������ ����� �� 10
		i--; //��������� �������
	}
	return; //���������� �������
}

void in_words(int digit, const int arr[]) { //���� ����� �������
	bool not_null = false; //����� ��������� �����
	if (digit < 0) //���� ������� ����� ����� �� 0
		printf("�i��� ");
	for (int i = 0; i < 10; i++) { //���� ������ ������ ����� �������
		if (arr[i] == 0 && !not_null) { //���� �������� ������� = 0 � ����� �������
			not_null = true; //����� �� �������
			if (arr[0] != 0) //���� �� ������ �������
				i--; //���������� �������
			continue; //���������� ��� �����
		}
		if (i == 0) { //���� ������ �������� = 0
			switch (arr[i]) { //���� �����
			case 1: printf("���� "); break;
			case 2: printf("��� "); break;
			}
			if(arr[i] == 0) //���� ��� ������� = 0 
				printf(""); 
			else if (arr[i] == 1) //���� ��� ������� = 1
				printf("�i����� ");
			else //� ������ ���
				printf("�i������ ");
		}
		if (i == 1 || i == 4 || i == 7) { //���� ������ ������� = 1, ��� 4, ��� 7
			switch (arr[i]) { //����
			case 1: printf("��� "); break;
			case 2: printf("��i��i "); break;
			case 3: printf("������ "); break;
			case 4: printf("��������� "); break;
			case 5: printf("�'����� "); break;
			case 6: printf("�i����� "); break;
			case 7: printf("�i���� "); break;
			case 8: printf("�i�i���� "); break;
			case 9: printf("���'����� "); break;
			}
			if (arr[i + 1] == 0 && arr[i + 2] == 0) { //���� ������� ��� �������� ���
				if (arr[i] == 0) //���� ������� = 0
					printf("");
				else if(i == 1) //���� ������ �������� = 1
					printf("�i�����i� ");
				else if(i == 4) //���� ������ �������� = 4
					printf("����� ");
			}
		}
		else if (i == 2 || i == 5 || i == 8) { //���� ������ ������� = 2, ��� 5, ��� 8
			if (arr[i] == 1) { //���� ������� = 1
				switch (arr[i + 1]) { //����
				case 0: printf("������ "); break;
				case 1: printf("���������� "); break;
				case 2: printf("���������� "); break;
				case 3: printf("���������� "); break;
				case 4: printf("������������ "); break;
				case 5: printf("�'��������� "); break;
				case 6: printf("�i��������� "); break;
				case 7: printf("�i�������� "); break;
				case 8: printf("�i�i�������� "); break;
				case 9: printf("���'��������� "); break;
				}
				if (arr[i + 2] == 0 || arr[i] == 0 || arr[i + 2] != 0) { //���� ������� = 0
				    if(i == 2) //���� ������ �������� = 2
						printf("�i�����i� ");
					else if(i == 5) //���� ������ �������� = 5
						printf("����� ");
				}
				else if (arr[i - 1] == 0) { //���� ��������� ������� = 0
					if (i == 1) //���� ������ �������� = 1
						printf("�i�����i� ");
					else if (i == 5) //���� ������ �������� = 5
						printf("����� ");
				}
			}
			else if (arr[i] != 1) { //���� ������� �� = 1
				switch (arr[i]) { //����
				case 2: printf("�������� "); break;
				case 3: printf("�������� "); break;
				case 4: printf("����� "); break;
				case 5: printf("�'������� "); break;
				case 6: printf("�i������� "); break;
				case 7: printf("�i������ "); break;
				case 8: printf("�i�i������ "); break;
				case 9: printf("���'������ "); break;
				}
				if(arr[i + 1] == 0) { //���� ��������� ������� = 0
					if (arr[i] == 0) //���� ������� = 0
						printf("");
					else if (i == 2) //���� ������ �������� = 2
						printf("�i�����i� ");
					else if (i == 5) //���� ������ �������� = 5
						printf("����� ");
				}
				else { //� ������ ���
					switch (arr[i + 1]) { //����
					case 1: {
						if (i + 1 == 6) //���� ��������� ������� �� �������� 6
							printf("���� ");
						else //� ������ ���
							printf("���� ");
					} break;
					case 2: {
						if (i + 1 == 6) //���� ��������� ������� �� �������� 6
							printf("��i ");
						else //� ������ ���
							printf("��� ");
					} break; 
					case 3: printf("��� "); break;
					case 4: printf("������ "); break;
					case 5: printf("�'��� "); break;
					case 6: printf("�i��� "); break;
					case 7: printf("�i� "); break;
					case 8: printf("�i�i� "); break;
					case 9: printf("���'��� "); break;
					}
					if (i == 2) { //���� ������ �������� = 2
						if (arr[i + 1] == 0) //���� ��������� ������� = 0
							printf("");
						else if (arr[i + 1] == 1) //���� ��������� ������� = 1
							printf("�i����� ");
						else if (arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4) //���� ��������� ������� = 2, 3 ��� 4
							printf("�i������ ");
						else //� ������ ���
							printf("�i�����i� ");
					}
					else if (i == 5) { //���� ������ �������� = 5
						if (arr[i + 1] == 0) //���� ��������� ������� = 0
							printf("");
						else if (arr[i + 1] == 1) //���� ��������� ������� = 1
							printf("������ ");
						else if (arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4) //���� ��������� ������� = 2, 3 ��� 4
							printf("�����i ");
						else
							printf("����� ");
					}
				}
			}
		}
	}
}