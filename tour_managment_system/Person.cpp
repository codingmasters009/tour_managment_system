#include "Person.h"



void Person::set_driver_data(int old, string pro, int exp)
{
	age = old;
	profession = pro;
	experience = exp;
}
int Person::get_age()
{
	return age;
}
string Person::get_pro()
{
	return profession;
}
int Person::get_exp()
{
	return experience;
}
void Person::display_Driver_data()
{
	cout << "profession:";
	cout<<get_pro()<<endl;
	cout << "name:";
	cout<<get_name()<<endl;
	cout << "age:";
	cout<<get_age()<<endl;
	cout << "experience:";
	cout<<get_exp()<<endl;
}