#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum=Add(a, b);
	printf("sum=%d\n", sum);
	return 0;

}*/

//库函数
/*int main()
{
	char arr1[] = "bit";
	char arr2[20]="##########";
	//             bit\0######  //\0结束标志
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	//strcpy-string copy-字符串拷贝
	//strlen-字符串长度有关
    return 0;
}*/

//memset-memory set-内存设置
/*int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	//***** world
	return 0;
}*/

//自定义函数
/*int get_max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max=get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}*/

/*void swap1(int x, int y)//不能完成任务
{
	int t=0;
	t = x;
	x = y;
	y = t;
}*/
/*void swap2(int* pa,int* pb)
{
	int tmp = 0;
	tmp=*pa;
	*pa=*pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	//swap1(a, b);//传值调用
	swap2(&a, &b);//调用函数,传址调用
	printf("%d %d\n", a, b);
	return 0;
}*/

/*int main()
{
	int a = 10;
	int* pa=&a;//pa指针变量
	*pa=20;//解引用操作
	printf("%d\n", a);
	return 0;
}*/

//实参和形参:形参是实参的一份拷贝

/*#include<math.h>
int is_prime(int n)//使用函数判断素数
{
	    int j = 0;
		for (j = 2; j<=sqrt(n); j++)//优化
		{
			if (n%j == 0)
			{
				return 0;
			}
		}
		
		return 1;
		
}
int main()
{
	int i=0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}

	return 0;
}*/

/*int is_leap_year(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0))
	{
		return 1;
	}
	else if (n % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main()//闰年判断实现
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (is_leap_year(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*/

                 //本质上arr是一个指针                    
/*int binary_search(int arr[], int k,int sz)
{
	int left = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	//二分查找
	//在一个有序数组中查找具体数字
	//如果找到了返回下标，找不到返回-1
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=binary_search(arr,k,sz);//传递过去的是数组首元素的地址
	if (ret == -1)
	{
		printf("找不到指定数字\n");
	}
	else
	{
		printf("找到了，下标是:>%d\n", ret);
	}
	return 0;
}*/

/*void Add(int* p)//写一个函数，每调用一次这个函数，就会将num的值增加1
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}*/

//嵌套调用
//链式访问
/*int main()
{
	int len = 0;
	len = strlen("abc");
	printf("%d\n", len);
	return 0;
}*/

/*int main()
{
	printf("%d", printf("%d", printf("%d", 43)));

	return 0;
	//4321
}*/

/*#include"add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}*/


