#include "Registration.h"


Registration::Registration(string a, string b, int c, int d)
{
	name = a;
	place = b;
	s_day = c;
	e_day = d; 
}

void Registration::set_reg_name(string a)
{
	name = a;
}
void Registration::set_reg_place(string b)
{
	place = b;
}
void Registration::set_sday(int c)
{
	s_day = c;
}
void Registration::set_eday(int d)
{
	e_day = d;
}

string Registration::get_name()
{
	return name;
}
string Registration::get_tour_place()
{
	return place;
}
int Registration::get_tour_sday()
{
	return s_day;
}
int Registration::get_tour_eday()
{
	return e_day;
}
