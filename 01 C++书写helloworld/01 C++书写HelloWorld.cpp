#include<iostream>
using namespace std;
#include<string>
#include "swap.h"

/*
	多行注释
	main函数
	每个程序有且只有一个
*/

#define Day 7

//结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
}stu3; //结构体变量创建方式3 

int main()
{
	//结构体变量创建方式1
	struct student stu1; //struct 关键字可以省略

	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;

	cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;

	//结构体变量创建方式2
	struct student stu2 = { "李四",19,60 };

	cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;


	stu3.name = "王五";
	stu3.age = 18;
	stu3.score = 80;


	cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl; 
	
	
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//int * p = arr;  //指向数组的指针

	//cout << "第一个元素： " << arr[0] << endl;
	//cout << "指针访问第一个元素： " << *p << endl;

	//for (int i = 0; i < 10; i++)
	//{
	//	//利用指针遍历数组
	//	cout << *p << endl;
	//	p++;
	//}
	
	//int a = 10;
	//int b = 10;

	////const修饰的是指针，指针指向可以改，指针指向的值不可以更改
	//const int * p1 = &a;
	//p1 = &b; //正确
	////*p1 = 100;  报错


	////const修饰的是常量，指针指向不可以改，指针指向的值可以更改
	//int * const p2 = &a;
	////p2 = &b; //错误
	//*p2 = 100; //正确

	////const既修饰指针又修饰常量
	//const int * const p3 = &a;
	////p3 = &b; //错误
	////*p3 = 100; //错误 

	
	////1、指针的定义
	//int a = 10; //定义整型变量a

	////指针定义语法： 数据类型 * 变量名 ;
	//int * p;

	////指针变量赋值
	//p = &a; //指针指向变量a的地址
	//cout << &a << endl; //打印数据a的地址
	//cout << p << endl;  //打印指针变量p

	////2、指针的使用
	////通过*操作指针变量指向的内存
	//cout << "*p = " << *p << endl;
	//cout << sizeof(p) << endl;
	//cout << sizeof(int *) << endl;
	//cout << sizeof(double) << endl;
	//cout << sizeof(char *) << endl;
	//cout << sizeof(float *) << endl;
	//cout << sizeof(double *) << endl;
	////所有指针类型在32位操作系统下是4个字节 64位是8字节 

	
	////跳过本次循环中余下尚未执行的语句，继续执行下一次循环
	//for (int i = 0; i < 100; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		continue;
	//	}
	//	cout << i << endl;
	//}
	
	////在嵌套循环语句中使用break，退出内层循环
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

	//整型输入
	//int a = 0;
	//cout << "请输入整型变量：" << endl;
	//cin >> a;
	//cout << a << endl;

	////浮点型输入
	//double d = 0;
	//cout << "请输入浮点型变量：" << endl;
	//cin >> d;
	//cout << d << endl;

	////字符型输入
	//char ch = 0;
	//cout << "请输入字符型变量：" << endl;
	//cin >> ch;
	//cout << ch << endl;

	////字符串型输入
	//string str;
	//cout << "请输入字符串型变量：" << endl;
	//cin >> str;
	//cout << str << endl;

	////布尔类型输入
	//bool flag = true;
	//cout << "请输入布尔型变量：" << endl;
	//cin >> flag;
	//cout << flag << endl;

	//char str1[] = "hello world";
	//cout << str1 << endl;

	//string str = "Hello World";//需要加头文件 #include<string>
	//cout << str << endl;
	
	//char ch = 'a';
	//cout << ch << endl;
	//cout << sizeof(char) << endl;

	////ch = "abcde"; //错误，不可以用双引号
	////ch = 'abcde'; //错误，单引号内只能引用一个字符

	//cout << (int)ch << endl;  //查看字符a对应的ASCII码
	//ch = 100; //可以直接用ASCII给字符型变量赋值
	//cout << ch << endl;
	
	//float f1 = 3.14f;
	////float f1 = 3.14;
	//double d1 = 3.14;

	//cout << f1 << endl;
	//cout << d1 << endl;

	//cout << "float  sizeof = " << sizeof(f1) << endl;
	//cout << "double sizeof = " << sizeof(d1) << endl;

	////科学计数法
	//float f2 = 3e2; // 3 * 10 ^ 2 
	//cout << "f2 = " << f2 << endl;

	//float f3 = 3e-2;  // 3 * 0.1 ^ 2
	//cout << "f3 = " << f3 << endl;



	//cout << "Hello World" << endl;
	////单行注释 屏幕中输出HelloWorld 

	//cout << "一周总共有 " << Day << " 天" << endl;

	//const int month = 12;//也是常量
	//
	//cout << "一年总共有 " << month<< " 个月份" << endl;

	//cout << "int 类型所占内存空间为： " << sizeof(int) << "\nmonth所占内存空间为： " << sizeof(month) << endl;

	system("pause");

	return 0;
}