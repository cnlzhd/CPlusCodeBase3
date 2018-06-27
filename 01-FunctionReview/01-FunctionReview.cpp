// 01-FunctionReview.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

//函数原型
int max(int num1 = 5, int num2 = 10);

//默认参数
void Greet(string name = "Phil");

void Swap(int &num1, int &num2);
void Swap(int *num1, int *num2);

//递归函数
long fact(int i);


int main()
{
	int num1 = 20;
	int num2 = 15;
	int res = max(num1, num2);
	cout << num1 << "和" << num2 << "中较大的值为：" << res << endl;

	Greet("Green");
	Greet();

	cout << "num1 " << num1 << " / num2 " << num2 << endl;
	Swap(num1, num2);
	cout << "num1 " << num1 << " / num2 " << num2  << endl;

	cout << "num1 " << num1 << " / num2 " << num2 << endl;
	Swap(&num1, &num2);
	cout << "num1 " << num1 << " / num2 " << num2 << endl;


	cout << "5的阶乘为：" << fact(5) << endl;

	cin.get();
    return 0;
}

//函数定义
//函数类型 函数名（参数类型）{函数体}

//按值传递
//有返回值的函数
int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}


//没有返回值的函数
void Greet(string name)
{
	cout << name << ", Hello!" << endl;
}

//按引用传递
void Swap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "参数类型为引用类型" << endl;
}

//函数重载 通过实参类型判断
void Swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	cout << "参数类型为指针类型" << endl;
}

//递归函数
long fact(int i)
{
	long temp;
	if (i == 0)
	{
		temp = 1;	
	}
	else
	{
		temp = i * fact(i - 1);
	}

	return temp;

}