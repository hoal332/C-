#define _CRT_SECURE_NO_WARANINGS 1
#include <stdio.h>

//���������������
//�����������������������
//�ֲ������������򣺱������ڵľֲ���Χ
//ȫ�ֱ�������������������
//extern �������� ����Կ��ļ�(ͬһԴ�ļ���)
//extern int xxx;

//��������������
//�����Ĵ����ʹݻ�֮���ʱ���

//�ֲ����������ڣ��������ڵľֲ���Χ��ʼ���뿪 ����
//ȫ�ֵ��������ڣ��������������


//����
//1.���泣��
//2.const���εĳ�����
//int a=20�� a=10��printf���ӡ�ľ���10
//const int��Ͳ��ܱ��
// int main()
//{
//	 const int a = 15;
//	// int a = 0;
//	 a = 20;
//	 printf("%d", a);
//return 0;
//}

#include <stdio.h>
//3.#define����ı�ʶ������(ͷ�ļ�)
//#define max 1000;���濪ʼmax�͵���1000��

//4.ö�ٳ���������һһ�оٵĳ���
//Ĭ�ϴ�0��ʼ
enum sex
{
	//�������͵ı�����δ������ȡֵ
	//ö�ٳ���
	MALE = 3,// ----����Ǹ���ֵ
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