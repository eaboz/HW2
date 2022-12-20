#pragma once
#include<iostream>
using namespace std;
class Employee//main employee class
{
protected:
	int salary;
public:
	Employee(int s = 0)
	{
		salary = s;
	}
	virtual int getsalary()
	{
		return salary;
	}
	virtual int getvacation()
	{
		return 0;
	}
	virtual int getinsurance()
	{
		return 0;
	}
};
class Professional :public Employee//derived professional class
{
protected:
	int days;
public:
	Professional(int d) :Employee(75000)
	{
		days = 33;
	}
	int getvacation()
	{
		return days;
	}
	int getinsurance()
	{
		return 75;
	}
};
class Nonprofessional :public Employee//derived nonprofessional class
{
protected:
	int hours;
public:
	Nonprofessional(int h = 0) :Employee(25 * h)
	{
		hours = h;
	}
	int getvacation()
	{
		return hours / 8;
	}
	int getinsurance()
	{
		return 55;
	}
};