#define _CRT_SECURE_NO_WARANINGS 1
#include <stdio.h>

int main()
{
	//创建一个变量
	//类型 变量名称=xxx；
	//类型 变量名称；不推荐
	int age = 18;
	double weight = 125;
	age = age + 1;
	weight = weight + 1;
	printf("%d\n", age);
	printf("%lf\n", weight);
	//%d - 整型
	//%f - float
	//%lf - double

	//变量分类-局部变量：{}内 全局变量：{}外
	//当局部变量和全局变量名称冲突的情况下，局部优先
	//不建议把全局变量和局部变量名称一致


	return 0;
}