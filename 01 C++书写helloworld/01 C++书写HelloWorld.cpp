#include<iostream>
using namespace std;
#include<string>
#include "swap.h"

/*
	����ע��
	main����
	ÿ����������ֻ��һ��
*/

#define Day 7

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
}stu3; //�ṹ�����������ʽ3 

int main()
{
	//�ṹ�����������ʽ1
	struct student stu1; //struct �ؼ��ֿ���ʡ��

	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;

	cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;

	//�ṹ�����������ʽ2
	struct student stu2 = { "����",19,60 };

	cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;


	stu3.name = "����";
	stu3.age = 18;
	stu3.score = 80;


	cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl; 
	
	
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//int * p = arr;  //ָ�������ָ��

	//cout << "��һ��Ԫ�أ� " << arr[0] << endl;
	//cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

	//for (int i = 0; i < 10; i++)
	//{
	//	//����ָ���������
	//	cout << *p << endl;
	//	p++;
	//}
	
	//int a = 10;
	//int b = 10;

	////const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը���
	//const int * p1 = &a;
	//p1 = &b; //��ȷ
	////*p1 = 100;  ����


	////const���ε��ǳ�����ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը���
	//int * const p2 = &a;
	////p2 = &b; //����
	//*p2 = 100; //��ȷ

	////const������ָ�������γ���
	//const int * const p3 = &a;
	////p3 = &b; //����
	////*p3 = 100; //���� 

	
	////1��ָ��Ķ���
	//int a = 10; //�������ͱ���a

	////ָ�붨���﷨�� �������� * ������ ;
	//int * p;

	////ָ�������ֵ
	//p = &a; //ָ��ָ�����a�ĵ�ַ
	//cout << &a << endl; //��ӡ����a�ĵ�ַ
	//cout << p << endl;  //��ӡָ�����p

	////2��ָ���ʹ��
	////ͨ��*����ָ�����ָ����ڴ�
	//cout << "*p = " << *p << endl;
	//cout << sizeof(p) << endl;
	//cout << sizeof(int *) << endl;
	//cout << sizeof(double) << endl;
	//cout << sizeof(char *) << endl;
	//cout << sizeof(float *) << endl;
	//cout << sizeof(double *) << endl;
	////����ָ��������32λ����ϵͳ����4���ֽ� 64λ��8�ֽ� 

	
	////��������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
	//for (int i = 0; i < 100; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		continue;
	//	}
	//	cout << i << endl;
	//}
	
	////��Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		if (j == 5)
	//		{
	//			break;
	//		}
	//		cout << "*" << " ";
	//	}
	//	cout << endl;
	//}

	//��������
	//int a = 0;
	//cout << "���������ͱ�����" << endl;
	//cin >> a;
	//cout << a << endl;

	////����������
	//double d = 0;
	//cout << "�����븡���ͱ�����" << endl;
	//cin >> d;
	//cout << d << endl;

	////�ַ�������
	//char ch = 0;
	//cout << "�������ַ��ͱ�����" << endl;
	//cin >> ch;
	//cout << ch << endl;

	////�ַ���������
	//string str;
	//cout << "�������ַ����ͱ�����" << endl;
	//cin >> str;
	//cout << str << endl;

	////������������
	//bool flag = true;
	//cout << "�����벼���ͱ�����" << endl;
	//cin >> flag;
	//cout << flag << endl;

	//char str1[] = "hello world";
	//cout << str1 << endl;

	//string str = "Hello World";//��Ҫ��ͷ�ļ� #include<string>
	//cout << str << endl;
	
	//char ch = 'a';
	//cout << ch << endl;
	//cout << sizeof(char) << endl;

	////ch = "abcde"; //���󣬲�������˫����
	////ch = 'abcde'; //���󣬵�������ֻ������һ���ַ�

	//cout << (int)ch << endl;  //�鿴�ַ�a��Ӧ��ASCII��
	//ch = 100; //����ֱ����ASCII���ַ��ͱ�����ֵ
	//cout << ch << endl;
	
	//float f1 = 3.14f;
	////float f1 = 3.14;
	//double d1 = 3.14;

	//cout << f1 << endl;
	//cout << d1 << endl;

	//cout << "float  sizeof = " << sizeof(f1) << endl;
	//cout << "double sizeof = " << sizeof(d1) << endl;

	////��ѧ������
	//float f2 = 3e2; // 3 * 10 ^ 2 
	//cout << "f2 = " << f2 << endl;

	//float f3 = 3e-2;  // 3 * 0.1 ^ 2
	//cout << "f3 = " << f3 << endl;



	//cout << "Hello World" << endl;
	////����ע�� ��Ļ�����HelloWorld 

	//cout << "һ���ܹ��� " << Day << " ��" << endl;

	//const int month = 12;//Ҳ�ǳ���
	//
	//cout << "һ���ܹ��� " << month<< " ���·�" << endl;

	//cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << "\nmonth��ռ�ڴ�ռ�Ϊ�� " << sizeof(month) << endl;

	system("pause");

	return 0;
}