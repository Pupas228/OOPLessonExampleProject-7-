#pragma once
#include "main.h"

class Doctor
{
privat:
	string name;
	string surname;
	int age;
	int power;

public:
	Doctor();
	Doctor(string n, string sname, int a, float mark);
	Doctor(string n, string sname);

	~Doctor();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	float get_avg_mark();
	/*void set_avg_mark(float mark);*/
	float get_expireins();
	void get_expireins(float get_expireins);
	/*void init(string n, string sname, int a, int power);
	void init_default();*/
	string convert_to_string();
};