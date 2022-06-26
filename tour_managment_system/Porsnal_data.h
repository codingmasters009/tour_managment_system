
#include<iostream>
#include<string>
#include<fstream>
#include "Registration.h"
class Parsnal_data :
	public Registration
{
protected:
	int sr_no;
	int client_no;
	string client_addres;
public:
	//Parsnal_data(int a, int b, int c, int d, int sr_no = 0, int client_no = 0, string client_addres = "0");
	//Parsnal_data(string a, string b, int c, int d, int sr_no, int client_no, string client_addres);
	void set_clint_info(int b,int c, string c1);
	int get_client_no();
	int getsr_no();
	string get_client_addres();
	void display();
};
