
#include<iostream>
#include<string>
using namespace std;
#include "Person.h"
class Guid :
	public Person
{
protected:
	string gender;
public: 
	void set_Guid(int b);
	string get_Guid();
	void display_guide();
};


