#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void proAddtion(int n, int chance); //nΪ��Ŀ����chanceΪ���������
void proSubtraction(int n, int chance);
void proMultiplication(int n, int chance);
void proDivision(int n, int chance);
int settingNumber();
int settingChance();
void printBlank(int n);
void praise();
void again();
void load();
void grade(int n, int i);
int menu()
{
	int select;
	system("cls");//����
	printf("\n\n");
	printBlank(34);
	printf("Ȥζ������Ϸ\n");
	printBlank(28);
	printf("************************\n");
	printBlank(34);
	printf("[1]�ӷ�\n");
	printBlank(34);
	printf("[2]����\n");
	printBlank(34);
	printf("[3]�˷�\n");
	printBlank(34);
	printf("[4]����\n");
	printBlank(34);
	printf("[5]������Ŀ��\n");
	printBlank(34);
	printf("[6]���ô������\n");
	printBlank(34);
	printf("[0]�˳�\n");
	printBlank(28);
	printf("************************\n\n");
	printBlank(5);
	printf("������ѡ��[ ]\b\b");
	scanf_s("%d", &select);
	return select;
}
void proAddtion(int n, int chance) {
	load();
	int a, b, sum, ans;
	int anserConter = 0, right = 0;
	int flag;
	srand((unsigned)time(0));
	printf("\n����⣺\n\n");

	//����������
	for (int i = 1; i <= n; i++) {
		anserConter = 0;
		flag = 1;
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		ans = a + b;
		while (anserConter < chance && flag)
		{
			printBlank(19);
			printf("%d��  %d + %d = ", i, a, b);
			scanf("%d", &sum);
			anserConter++;
			if (sum == ans) {
				praise();
				flag = 0;
				break;
			}
			else if (anserConter < chance) {
				again();
			}
		}
		if (flag == 1) {
			printf("û���ˣ�-_- '��������%d\n", ans);
		}
		else right++;
	}
	//��������
	int t = right;
	if (right == n)right = 1;
	else if (right >= n * 2 / 3)right = 2;
	else right = 3;
	switch (right) {
	case 1:
		printf("ȫ�ԣ�������\n");
		break;
	case 2:
		printf("%d����%d����һ��һ�㡣\n", n, t);
		break;
	case 3:
		printf("%d���Ŷ�%d�������԰���ҡͷ��\n", n, t);
		printf("���԰���ҡͷ��\n");
		printf("���԰���ҡͷ��\n");
		break;
	}
	//���ϵͳ
	grade(n, t);
	system("pause");
}
void proSubtraction(int n, int chance) {
	load();
	int a, b, sum, ans;
	int anserConter = 0, right = 0;
	int flag;
	srand((unsigned)time(0));
	printf("\n����⣺\n\n");

	for (int i = 1; i <= n; i++) {
		anserConter = 0;
		flag = 1;
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		ans = a - b;
		while (anserConter < chance && flag)
		{
			printBlank(19);
			printf("%d��  %d - %d = ", i, a, b);
			scanf("%d", &sum);
			anserConter++;
			if (sum == ans) {
				praise();
				flag = 0;
				break;
			}
			else if (anserConter < chance) {
				again();
			}
		}
		if (flag == 1) {
			printf("û���ˣ�-_- '��������%d\n", ans);
		}
		else right++;
	}
	//����������
	int t = right;
	if (right == n)right = 1;
	else if (right >= n * 2 / 3)right = 2;
	else right = 3;
	switch (right) {
	case 1:
		printf("ȫ�ԣ�������\n");
		break;
	case 2:
		printf("%d����%d����һ��һ�㡣\n", n, t);
		break;
	case 3:
		printf("%d���Ŷ�%d�������԰���ҡͷ��\n", n, t);
		printf("���԰���ҡͷ��\n");
		printf("���԰���ҡͷ��\n");
		break;
	}
	grade(n, t);
	system("pause");
}
void proMultiplication(int n, int chance) {
	load();
	int a, b, sum, ans;
	int anserConter = 0, right = 0;
	int flag;
	srand((unsigned)time(0));
	printf("\n����⣺\n\n");

	for (int i = 1; i <= n; i++) {
		anserConter = 0;
		flag = 1;
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		ans = a * b;
		while (anserConter < chance && flag)
		{
			printBlank(19);
			printf("%d��  %d * %d = ", i, a, b);
			scanf("%d", &sum);
			anserConter++;
			if (sum == ans) {
				praise();
				flag = 0;
				break;
			}
			else if (anserConter < chance) {
				again();
			}
		}
		if (flag == 1) {
			printf("û���ˣ�-_- '��������%d\n", ans);
		}
		else right++;
	}
	//����������
	int t = right;
	if (right == n)right = 1;
	else if (right >= n * 2 / 3)right = 2;
	else right = 3;
	switch (right) {
	case 1:
		printf("ȫ�ԣ�������\n");
		break;
	case 2:
		printf("%d����%d����һ��һ�㡣\n", n, t);
		break;
	case 3:
		printf("%d���Ŷ�%d�������԰���ҡͷ��\n", n, t);
		printf("���԰���ҡͷ��\n");
		printf("���԰���ҡͷ��\n");
		break;
	}
	grade(n, t);
	system("pause");
}
void proDivision(int n, int chance) {
	load();
	int a, b, sum, ans;
	int anserConter = 0, right = 0;
	int flag;
	srand((unsigned)time(0));
	printf("\n�����(�����������)��\n\n");

	for (int i = 1; i <= n; i++) {
		anserConter = 0;
		flag = 1;
		a = rand() % 100 + 1;
		b = rand() % 20 + 1;
		ans = (a + b / 2) / b;
		while (anserConter < chance && flag)
		{
			printBlank(19);
			printf("%d��  %d / %d = ", i, a, b);
			scanf("%d", &sum);
			anserConter++;
			if (sum == ans) {
				praise();
				flag = 0;
				break;
			}
			else if (anserConter < chance) {
				again();
			}
		}
		if (flag == 1) {
			printf("û���ˣ�-_- '��������%d\n", ans);
		}
		else right++;
	}
	//����������
	int t = right;
	if (right == n)right = 1;
	else if (right >= n * 2 / 3)right = 2;
	else right = 3;
	switch (right) {
	case 1:
		printf("ȫ�ԣ�������\n");
		break;
	case 2:
		printf("%d����%d����һ��һ�㡣\n", n, t);
		break;
	case 3:
		printf("%d���Ŷ�%d�������԰���ҡͷ��\n", n, t);
		printf("���԰���ҡͷ��\n");
		printf("���԰���ҡͷ��\n");
		break;
	}
	grade(n, t);
	system("pause");
}
int settingNumber() {
	load();
	int number;
	printf("\n\n\n\n\n        ��������������������");
	scanf("%d", &number);
	printf("\n\n\n\n\n\n\n\n");
	return number;
}
int settingChance() {
	load();
	int chance;
	printf("\n\n\n\n\n         �����ô���Ļ�������");
	scanf("%d", &chance);
	printf("\n\n\n\n\n\n\n\n");
	return chance;
}
void printBlank(int n) {
	for (int a = 1; a <= n; a++) {
		printf(" ");
	}
}
void load() {
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printBlank(60);

	printf("������");
	for (int i = 1; i <= 5; i++) {
		for (int a = 1; a <= 300000000; a++) { ; }
		printf("    *");
	}
	system("cls");
}
void again() {
	srand(time(0));
	int t = rand() % 3 + 1;
	switch (t) {
	case 1:
	printf("�ⶼ����������𣨰��ۣ�������һ��\n");
	break;
	case 2:
	printf("666,�ⶼ�������һ��\n");
	break;
	case 3:
	printf("�ⶼ����������㣨�ٱǣ�������һ��\n");
	break;
	}
}
void praise() {
	srand(time(0));
	int t = rand() % 5 + 1;
	switch (t) {
	case 1:
		printf("Good job!\n");
		break;
	case 2:
		printf("Great!\n");
		break;
	case 3:
		printf("Well done!\n");
		break;
	case 4:
		printf("Perfect!\n");
		break;
	case 5:
		printf("Way to go!\n");
		break;
	}
}
void grade(int n, int i) {
	double grad;
	grad = 1.0 * i / n * 100.0;
	printf("���ĵ÷�Ϊ�� %.1lf ������", grad);
}
