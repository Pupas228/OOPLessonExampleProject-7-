#pragma once
#include "main.h"
class Teacher
{
public:

privat:
	string name;
	string surname;
	int age;
	int power;
	Publik:
	Teacher();
	Teacher(string n, string sname, int a, float mark);
	Teacher(string n, string sname);

	~Teacher();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	float get_avg_mark();
	void set_avg_mark(float mark);

	void init(string n, string sname, int a, int power);
	void init_default();
	string convert_to_string();
}