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

//�⺯��
/*int main()
{
	char arr1[] = "bit";
	char arr2[20]="##########";
	//             bit\0######  //\0������־
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	//strcpy-string copy-�ַ�������
	//strlen-�ַ��������й�
    return 0;
}*/

//memset-memory set-�ڴ�����
/*int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	//***** world
	return 0;
}*/

//�Զ��庯��
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

/*void swap1(int x, int y)//�����������
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
	//swap1(a, b);//��ֵ����
	swap2(&a, &b);//���ú���,��ַ����
	printf("%d %d\n", a, b);
	return 0;
}*/

/*int main()
{
	int a = 10;
	int* pa=&a;//paָ�����
	*pa=20;//�����ò���
	printf("%d\n", a);
	return 0;
}*/

//ʵ�κ��β�:�β���ʵ�ε�һ�ݿ���

/*#include<math.h>
int is_prime(int n)//ʹ�ú����ж�����
{
	    int j = 0;
		for (j = 2; j<=sqrt(n); j++)//�Ż�
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
int main()//�����ж�ʵ��
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

                 //������arr��һ��ָ��                    
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
	//���ֲ���
	//��һ�����������в��Ҿ�������
	//����ҵ��˷����±꣬�Ҳ�������-1
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=binary_search(arr,k,sz);//���ݹ�ȥ����������Ԫ�صĵ�ַ
	if (ret == -1)
	{
		printf("�Ҳ���ָ������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���:>%d\n", ret);
	}
	return 0;
}*/

/*void Add(int* p)//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
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

//Ƕ�׵���
//��ʽ����
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
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}*/


