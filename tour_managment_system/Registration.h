#ifndef Registration_HEADER
#define Registration_HEADER
#include<iostream>
#include<string> 

using namespace std;
class Registration


{
protected:
	string name;
	string place;
	int s_day;
	int e_day;
public:
	Registration(string a = "0", string b= "0", int c = 0,int d = 0);
	void set_reg_name(string a);
	void set_reg_place(string b);
	void set_sday(int c);
	void set_eday(int d);
	string get_name();
	string get_tour_place();
	int get_tour_sday();
	int get_tour_eday();
};
#endif

