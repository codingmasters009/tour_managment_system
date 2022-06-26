#include "Porsnal_data.h"

//Parsnal_data::Parsnal_data(string a, string b, int c, int d, int sr_no = 0, int client_no = 0, string client_addres = "0"):Registration(a, b, c, d)
//{
	//sr_no = 0;
	//client_no = 0;
	//client_addres = "0";
//}

//Parsnal_data::Parsnal_data(int a, int b, int c, int d, int sr_no, int client_no, string client_addres) :Registration(a, b, c, d);
//{
//}

void Parsnal_data::set_clint_info(int b,int c, string c1)
{
	sr_no = b;
	client_no = c;
	client_addres = c1;
}
int Parsnal_data::get_client_no()
{
	return client_no;
}
string Parsnal_data::get_client_addres()
{
	return client_addres;
}
int Parsnal_data::getsr_no()
{
	return sr_no;
}
void Parsnal_data::display()
{
	
		cout << "client name:";
		cout << get_name() <<endl;
		cout << "client sr.no:";
		cout << get_client_no() << endl;
		cout << "client number";
		cout << getsr_no() << endl;
		cout << "clint address:";
		cout << get_client_addres() << endl;
	

}

