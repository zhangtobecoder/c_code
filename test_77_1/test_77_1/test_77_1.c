#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int day = 0;
	int n = 1;
	scanf("%d", day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("%d\n", 工作日);
		break;
	case 6:
	case 7:
		printf("%d\n", 休息日);
		break;
	default:
		printf("%d\n", 输入错误);
		break;
	}
}