#include <iostream>

using namespace std;

class Time
{
	int min, sec;
public:
	Time() { min = 0; sec = 0; };
	Time(int m, int s) { min = m; sec = s; }
	Time(const Time & t) { min = t.min; sec = t.sec; }
	~Time() {};
	int get_main() { return min; }
	int get_sec() { return sec; }
	void set_min(int m) { min = m; }
	void set_sec(int s) { sec = s; }

	// Перегруженные операции 

	Time&operator=(const Time&);
	Time&operator++();
	Time&operator++(int); // Постфиксная опреация
	Time&operator+(const Time&); // Проверить, возможна ошика

	// Глобальные функции ввода-вывода 

	friend istream& operator>>(istream & in, Time & t);
	friend ostream& operator<<(ostream & out, const Time & t);
};