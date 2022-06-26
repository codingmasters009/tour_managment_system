#include<iostream>
#include<string>
#include "Person.h"
class Vehical :
	public Person
{
protected:
	int no_of_pursson;
public:
	void set_value_vehical(int n);
	int get_value();
};

