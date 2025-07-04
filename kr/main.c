/*� ���� �������� �������� �� �������, ��������� �� �����, �������, �����������
�������, ����������.
��������� �������� ����� in.txt
������ ������ ��01 5
������ ������ ��02 7
����������� ����� �1 15

���������� ���������� ������� �� ������� �������.
��������� ��������� ����� out.txt
������ 2
����������� 1*/

// ������� ��������� �.�., ����, 2025
// ������� ����������� �.�., ����, 19.06.2025 
// ����������� ������ 313��-22
// ���� 1 �� 5. ������ �� ����� � ������ � ���-������ 
// ���� 2 �� 5. ���������� �������. ������� 
// ���� 3 �� 5. ���� 
// ���� 4 �� 5. �������� ������� �� ������ 



#include <stdio.h>
#include <locale.h>
#include "info.h"
#include "func.h"
#define AR_LEN  100
#define TRUE 1

int main(){  
	setlocale(LC_ALL, "");
	int count = 0;
	Information info[AR_LEN];
	while (TRUE) {
		int item = -1;
		show_menu();
		scanf("%d", &item);
		if (item == 0) {
			/* ����� */
			printf("������� �� ������������� ����� ����������\n");
			getchar();
			getchar();
			break;
		}
		else if (item == 1) {
			/* � ��������� */
			printf("�������:");
			fioname();
			getchar();
		}
		else if (item == 2) {
			/* �������� �� ����� */
			count = load("in.txt", info, AR_LEN);
			printf("���� �������� � ������\n");
			getchar();
		}
		else if (item == 3) {
			/* ������ ������, ������������ �� �������� ����� */
			echo_print(info, count);
			getchar();
		}
		else if (item == 4) {
			/* ���������� ������� � ���������� ���������� */
			number_of_entries(info, count, "out.txt");
			printf("��������� �������� � ����� %s\n", "out.txt");
			getchar();
		}
		else {
			/* ��������� ���� */
			printf("O�����. ������ �� 0 �� 4\n");
			getchar();
		}
	}
	
	return 0;
	
}


