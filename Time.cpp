#include "Time.h"
#include <iostream>
using namespace std;

// Перегрузка операции присвоения
Time& Time::operator=(const Time& t)
{
	// Проверка на самоприсвоение 
	if (&t == this) return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}

// Перегрузка префиксной оперции инкремент 
Time& Time::operator++()
{
	int temp = min * 60 + sec;
	temp++;
	min = temp / 60;
	sec = temp % 60;
	return *this;
}

// Перегрузка постфиксной оперции инкремент
Time& Time::operator++(int)
{
	int temp = min * 60 + sec;
	temp++;
	Time t(min, sec);
	min = temp / 60;
	sec = temp % 60;
	return t;
}

// Прегрузка бинарной оперцаии сложения 
Time& Time::operator+ (const Time& t)
{
	int temp1 = min * 60 + sec;
	int temp2 = t.min * 60 + t.sec;
	Time p;
	p.min = (temp1 + temp2) / 60;
	p.sec = (temp1 + temp2) % 60;
	return p;
}

// Перегрузка глобальной функции-операции ввода

istream& operator>>(istream& in, Time& t)
{
	cout << "min?";
	in >> t.min;
	cout << "sec?"; 
	in >> t.sec;
	return in;
}

// Перегрузка глобальной функции-операции вывода

ostream& operator<<(ostream& out, const Time& t)
{
	return (out << t.min << " : " << t.sec);
}