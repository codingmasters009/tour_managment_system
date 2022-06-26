#include "Guid.h"

void Guid::set_Guid(int b)
{
	gender=b;
}
string Guid::get_Guid()
{
	return gender;
}
void Guid::display_guide()
{
	cout << "profession:";
	cout << get_pro() << endl;
	cout << "name:";
	cout << get_name() << endl;
	cout << "gender";
	cout << get_Guid() << endl;
	cout << "age:";
	cout << get_age() << endl;
	cout << "EXP:";
	cout << get_exp()<< endl;
}
