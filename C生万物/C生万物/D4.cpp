#define _CRT_SECURE_NO_WARANINGS 1
#include <stdio.h>

//作用域和生命周期
//哪里起作用哪里就是作用域
//局部变量的作用域：变量所在的局部范围
//全局变量的作用域：整个工程
//extern 声明变量 后可以跨文件(同一源文件下)
//extern int xxx;

//变量的生命周期
//变量的创建和摧毁之间的时间段

//局部的生命周期：进入所在的局部范围开始，离开 结束
//全局的生命周期：程序的生命周期


//常量
//1.字面常量
//2.const修饰的常变量
//int a=20； a=10；printf里打印的就是10
//const int后就不能变的
// int main()
//{
//	 const int a = 15;
//	// int a = 0;
//	 a = 20;
//	 printf("%d", a);
//return 0;
//}

#include <stdio.h>
//3.#define定义的标识符常量(头文件)
//#define max 1000;下面开始max就等于1000了

//4.枚举常量：可以一一列举的常量
//默认从0开始
enum sex
{
	//这种类型的变量的未来可能取值
	//枚举常量
	MALE = 3,// ----这个是赋出值
	//MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}