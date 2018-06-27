// 02-ClassReview.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;


class Student
{
	//作用域为类的常量，加上static关键字，因为需要给常量分配内存空间
	static const int PassingScore = 560;

	//友元函数 写在类的外部 但是可以通过使用类的对象去访问类的私有成员，它不是类的成员方法
	//使用friend关键字
	friend void pass(Student &s);

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



//类方法的定义
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
	cout << "该学生的名字：" << _name << " ，该学生的年龄： " << _age << " ，该学生的分数：" << _score << endl;
}

bool Student::max(Student &s)
{
	return this->_score >= s._score ? true : false;
}


void sort()
{

}

void pass(Student &s)
{
	if (s._score >= s.PassingScore)
	{
		cout << s._name << "通过了该次考试！" << endl;
	}
	else
	{
		cout << s._name << "没有通过该次考试！" << endl;
	}
	
}
int main()
{

	Student stu1;
	Student stu2("Sandy", 17, 560);
	Student stu3("Green", 18, 588);

	stu2.print();
	bool res = stu2.max(stu3);
	if (res)
	{
		cout << "Sandy的分数比Green高" << endl;
	}
	else
	{
		cout << "Green的分数比Sandy高" << endl;
	}

	Student stu4[3];
	stu4[0] = Student("Joe", 19, 600);
	stu4[1] = Student("Steve", 20, 610);
	stu4[2] = Student("Klay", 21, 654);

	pass(stu2);
    return 0;
}

