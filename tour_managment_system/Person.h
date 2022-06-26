#ifndef Person_HEADER
#define Person_HEADER
#include<iostream>
#include<string>
#include"Registration.h"
using namespace std;
class Person:
	public Registration
{
protected:
	int age;
	string profession;
	int experience;
public:
	void set_driver_data(int old, string pro, int exp);
	int get_age();
	string get_pro();
	int get_exp();
	void display_Driver_data();
};
#endif
