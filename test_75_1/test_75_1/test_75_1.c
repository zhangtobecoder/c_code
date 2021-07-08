//原码->反码->补码
//整数，内存中存取的都是二进制补码；正数，原码，反码，补码相同；负数，存补码；
//原码：按照正负写出的二进制序列；反码：原码符号位不变，其余位按位取反；补码：反码加一
//-2    10000000000000000000000000000010  原码
//      11111111111111111111111111111101  反码
//      11111111111111111111111111111110  补码
//关键字:auto break case char const continue enum extern float for go if goto register return 
//计算机存储数据：寄存器  高速缓存 内存8G/4G/16G 硬盘500G
//CPU-中央处理器 
#include<stdio.h>
//int main()
//{
//	auto int a = 10;//局部变量-自动变量
//	return 0;
//}
//
//int main()
//{
//	//typedef// 类型定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}//typedef
//void test()
//{
//	static int a = 1;//a静态局部变量,static修饰局部变量，局部变量的生命周期变长；
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}//2 3 4 5 6 
//int main()
//{
//	//extern 声明外部符号
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}//static修饰全局变量 改变了作用域，让静态的全局变量只能在自己的源文件内部使用
//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum =Add(a,b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#define Max 100//定义标识符常量
//define 定义宏
//int Max(int x, int y)//函数实现
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义方式
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = Max;
//	int a = 10;
//	int b = 20;
//	//函数方式
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//指针
//内存
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
