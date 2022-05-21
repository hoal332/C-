#define _CRT_SECURE_NO_WARANINGS 1
#include <stdio.h>

int main()
{
	//数组--一组相同类型的元素的集合
	//数组用下标来访问
	int add[10] = { 1,2,3,4,5,6,7,8,9,10 };

	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的为0

	return 0;
}

#include <stdio.h>

int main()
{
	//操作符 
	//  9/2---这个数整数除法
	//  9/2.0--这个数萧疏除法
	//  %---取模-得出余数
	// 移位操作符 <<左移---移动的是二进制位
	// 位操作符：& 按位与 ，｜ 按位或，^按位异或
	// 赋值操作符：= += （d=d+x） 剩下的同理
	//单目操作符--双目时a+b时--+有两个操作数。单目就是一个操作数时的情况
	 //int a=1;
	 //0表假 1表真
	 //printf("%d\n",!a);
	 //!怎么用？
	 //if(a)
	 //{
	 //}
	 //if(!a)
	 //{
	 //}
	//sizeof也是单目操作符，后面的括号可以省略---计算类型或者是变量大小的 +a -a 前面的也算单目操作符
	//int a=10;
	// printf("%d\n",sizeof(int));
	// printf("%d\n",sizeof a );
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算数组的总大小，单位上字节
	printf("%d\n", sizeof arr[0]);
	int sz = sizeof(arr) / sizeof(arr[0]);//求数组个数 
	printf("%d\n", sz);


	return 0;
}


#include <stdio.h>

int main()
{
	int a = 0;
	printf("%d\n", ~a);
	//～按位取反
	//二进制位
   // 0--- 00000000 00000000 00000000 00000000
   //～a---11111111 11111111 11111111 11111111
   //~按二进制位取法-把所有二进制位中数字，1变0，0变1.

   //数据在内存中存的是补码
   //一个整数的二进制表示有3种：
	//这里是计算机组成原理的内容
	//（负数的数这样的）-1的原码1000000000000000000000001
	//反码 111111111111111111111111110
	//补码 111111111111111111111111111（内存存的就是这个）
	//正整数 原 反 补相同
	return 0;
}


#include <stdio.h>

int main()
{
	//int a=10;
	//int b=a++;//后置++，先使用，再++
	//printf("%d\n",b);
	//printf("%d\n",a);
	//int b=++a;//前置++,先++，后使用
	//printf("%d\n",b);
	//printf("%d\n",a);

	return 0;
}

#include <stdio.h>

int main()
{
	/ 制类型转换
		int a = (int)3.14;
	printf("%d", a);
	return 0;
}

#include <stdio.h>

int main()
{
	//逻辑操作符 &&逻辑与 
  //有一个是0（假） 就是假 
	int a = 3;
	int b = 0;
	int c = a && b;
	printf("%d\n", c);

	// ||逻辑或 有一个为真就是真
	int d = a || b;
	printf("%d\n", d);
	return 0;
}

#include <stdio.h>

int main()
{
	//条件操作符（三目操作符）
	//exp1?exp2:exp3
   //exp1成立，exp2计算，整个表达式的结构是：exp2的结果
   //exp1不成立，exp3计算，整个表达式的结构是：exp3的结果
	int a = 0;
	int b = 3;
	int max = 0;
	// if (a>b)
	//  max=a;
	// else
	//  max=b;

	max = a > b ? a : b;//三目操作符
	printf("%d\n", max);

	//逗号表达式：逗号隔开的一串表达式
	//(2,4+5,6);
	int x = 0;
	int y = 3;
	int c = 5;
	//     a=5    c=1    b=3
	int d = (a = b + 2, c = a - 4, b = c + 2);//这就是括号表达式
	//从左向右依次计算，整个表达式的结果是最后一个表达式的结果

	printf("%d\n", d);

	return 0;
}

#include <stdio.h>

int main()
{
	//下标引用操作符
	int arr[3] = { 1,2,3 };
	printf("%d\n", arr[2]);
	//这里的[]就是下标引用操作符
   //函数调用操作符
	printf("hehe\n");
	//这里的（）就是函数调用操作符
	return 0;
}

关键字要求了解和记忆