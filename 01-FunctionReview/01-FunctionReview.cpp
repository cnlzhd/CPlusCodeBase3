// 01-FunctionReview.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

//函数原型
int max(int num1, int num2);

int main()
{
	int num1 = 20;
	int num2 = 15;
	int res = max(num1, num2);
	cout << num1 << "和" << num2 << "中较大的值为：" << res << endl;
	cin.get();
    return 0;
}

//函数定义
//函数类型 函数名（参数类型）{函数体}
//有返回值的函数
int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}
