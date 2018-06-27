// 02-ClassReview.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;


class Student
{
private:
	string _name;
	int _age;
	int _score;

public:
	Student();
	Student(string name,int age,int score);

	~Student();

public:
	void print();
	bool max(Student &s);
};


//类方法
Student::Student()
{
	_name = "";
	_age = 0;
	_score = 0;
}

Student::Student(string name, int age, int score)
{
	_name = name;
	_age = age;
	_score = score;
}

Student::~Student()
{

}

void Student::print()
{

}

bool Student::max(Student &s)
{
	return this->_score >= s._score ? true : false;
}

int main()
{
    return 0;
}

