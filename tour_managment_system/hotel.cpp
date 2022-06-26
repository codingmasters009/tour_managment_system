#include "hotel.h"

void hotel::sethotel(string a)
{
	hotels = a;
}
void hotel::setgeasthouse(string b)
{
	geasthouse = b;
}
string hotel::gethotel()
{
	return hotels;
}
string hotel::getgeasthouse()
{
	return geasthouse;
}
void hotel::display()
{
	cout << gethotel() << endl;
	cout << getgeasthouse() << 
		endl;
}