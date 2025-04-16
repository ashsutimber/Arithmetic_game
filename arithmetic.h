#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void proAddtion(int n, int chance); //n为题目数，chance为答题机会数
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
	system("cls");//清屏
	printf("\n\n");
	printBlank(34);
	printf("趣味算术游戏\n");
	printBlank(28);
	printf("************************\n");
	printBlank(34);
	printf("[1]加法\n");
	printBlank(34);
	printf("[2]减法\n");
	printBlank(34);
	printf("[3]乘法\n");
	printBlank(34);
	printf("[4]除法\n");
	printBlank(34);
	printf("[5]设置题目数\n");
	printBlank(34);
	printf("[6]设置答题机会\n");
	printBlank(34);
	printf("[0]退出\n");
	printBlank(28);
	printf("************************\n\n");
	printBlank(5);
	printf("请输入选项[ ]\b\b");
	scanf_s("%d", &select);
	return select;
}
void proAddtion(int n, int chance) {
	load();
	int a, b, sum, ans;
	int anserConter = 0, right = 0;
	int flag;
	srand((unsigned)time(0));
	printf("\n请答题：\n\n");

	//答题区代码
	for (int i = 1; i <= n; i++) {
		anserConter = 0;
		flag = 1;
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		ans = a + b;
		while (anserConter < chance && flag)
		{
			printBlank(19);
			printf("%d、  %d + %d = ", i, a, b);
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
			printf("没救了（-_- '），答案是%d\n", ans);
		}
		else right++;
	}
	//计算评级
	int t = right;
	if (right == n)right = 1;
	else if (right >= n * 2 / 3)right = 2;
	else right = 3;
	switch (right) {
	case 1:
		printf("全对，不错不错\n");
		break;
	case 2:
		printf("%d道对%d道，一般一般。\n", n, t);
		break;
	case 3:
		printf("%d道才对%d道，猪脑啊（摇头）\n", n, t);
		printf("猪脑啊（摇头）\n");
		printf("猪脑啊（摇头）\n");
		break;
	}
	//打分系统
	grade(n, t);
	system("pause");
}
void proSubtraction(int n, int chance) {
	load();
	int a, b, sum, ans;
	int anserConter = 0, right = 0;
	int flag;
	srand((unsigned)time(0));
	printf("\n请答题：\n\n");

	for (int i = 1; i <= n; i++) {
		anserConter = 0;
		flag = 1;
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		ans = a - b;
		while (anserConter < chance && flag)
		{
			printBlank(19);
			printf("%d、  %d - %d = ", i, a, b);
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
			printf("没救了（-_- '），答案是%d\n", ans);
		}
		else right++;
	}
	//答题区代码
	int t = right;
	if (right == n)right = 1;
	else if (right >= n * 2 / 3)right = 2;
	else right = 3;
	switch (right) {
	case 1:
		printf("全对，不错不错\n");
		break;
	case 2:
		printf("%d道对%d道，一般一般。\n", n, t);
		break;
	case 3:
		printf("%d道才对%d道，猪脑啊（摇头）\n", n, t);
		printf("猪脑啊（摇头）\n");
		printf("猪脑啊（摇头）\n");
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
	printf("\n请答题：\n\n");

	for (int i = 1; i <= n; i++) {
		anserConter = 0;
		flag = 1;
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		ans = a * b;
		while (anserConter < chance && flag)
		{
			printBlank(19);
			printf("%d、  %d * %d = ", i, a, b);
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
			printf("没救了（-_- '），答案是%d\n", ans);
		}
		else right++;
	}
	//答题区代码
	int t = right;
	if (right == n)right = 1;
	else if (right >= n * 2 / 3)right = 2;
	else right = 3;
	switch (right) {
	case 1:
		printf("全对，不错不错\n");
		break;
	case 2:
		printf("%d道对%d道，一般一般。\n", n, t);
		break;
	case 3:
		printf("%d道才对%d道，猪脑啊（摇头）\n", n, t);
		printf("猪脑啊（摇头）\n");
		printf("猪脑啊（摇头）\n");
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
	printf("\n请答题(结果保留整数)：\n\n");

	for (int i = 1; i <= n; i++) {
		anserConter = 0;
		flag = 1;
		a = rand() % 100 + 1;
		b = rand() % 20 + 1;
		ans = (a + b / 2) / b;
		while (anserConter < chance && flag)
		{
			printBlank(19);
			printf("%d、  %d / %d = ", i, a, b);
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
			printf("没救了（-_- '），答案是%d\n", ans);
		}
		else right++;
	}
	//答题区代码
	int t = right;
	if (right == n)right = 1;
	else if (right >= n * 2 / 3)right = 2;
	else right = 3;
	switch (right) {
	case 1:
		printf("全对，不错不错\n");
		break;
	case 2:
		printf("%d道对%d道，一般一般。\n", n, t);
		break;
	case 3:
		printf("%d道才对%d道，猪脑啊（摇头）\n", n, t);
		printf("猪脑啊（摇头）\n");
		printf("猪脑啊（摇头）\n");
		break;
	}
	grade(n, t);
	system("pause");
}
int settingNumber() {
	load();
	int number;
	printf("\n\n\n\n\n        请输入你想答题的题数：");
	scanf("%d", &number);
	printf("\n\n\n\n\n\n\n\n");
	return number;
}
int settingChance() {
	load();
	int chance;
	printf("\n\n\n\n\n         请设置答题的机会数：");
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

	printf("加载中");
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
	printf("这都会错，你是猪吗（白眼），再试一次\n");
	break;
	case 2:
	printf("666,这都会错，再试一次\n");
	break;
	case 3:
	printf("这都会错，不愧是你（抠鼻），再试一次\n");
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
	printf("您的得分为： %.1lf ！！！", grad);
}
