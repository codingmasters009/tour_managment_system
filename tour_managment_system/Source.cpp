#include "Porsnal_data.h"
#include "Registration.h"
#include<iostream>
#include<string>
#include "Vehical.h"
#include "Guid.h"
#include"Person.h"
#include<fstream>
#include "hotel.h"
#include "packaje.h"
#include "tour.h"

#include<iostream>
#include "Source.h"
using namespace std;
int main()
{
	// Pakage name change rename variable
	packaje p;
	Person h;
	hotel h2;
	//hotel* h3 = &p;
	Guid gu;
	Person* r = &gu;
	Parsnal_data per;
	Vehical veh;
	Registration* s1 = &per;
	Registration* s3 = &h;
	Person* s2 = &veh;
	string a;
	int b;
	int c1;
	int d;
	ofstream myfile;
	string e;
	int choose;
    jump3:
     jump4:
	cout << "please choose one of the following:\n";
	cout << "1:If you are admin:\n";
	cout << "2:If you are custumer:\n";
	cin >> choose;
	if (choose == 1)
	{


		string username;
		string password;
		cout << "Please enter your user name: ";
		cin >> username;
		cout << "Please enter your user password: ";
		cin >> password;
		if (username == "Abdullah" && password == "Abdullah1999")
		{
			cout << "Welcome" << endl;



			int option;
		jump:
			NewFunction(option);
			while (option != 6)
			{
				switch (option)
				{
				case 1:
				{

					per.display();
					break;
				}
				case 2:
				{
					string a;
					int n;
					int a1;
					string b;
					int c;
					cout << "Entre The name of the driver:";
					cin >> a;
					s1->set_reg_name(a);
					cout << "Enter the profession of person";
					cin >> a1;
					cout << "Enter the age of driver";
					cin >> b;
					cout << "Enter the experionce";
					cin >> c;
					veh.set_driver_data(a1, b, c);
					cout << "Please Enter number of person to select your vehical:";
					cin >> n;
					if (n >= 1 && n <= 4)
					{
						cout << "choice a car for you\n";
					}
					else if (n > 5 && n <= 11)
					{
						cout << "choice a high roof for you\n";
					}
					else if (n >= 12 && n <= 25)
					{
						cout << "choice a bus for you\n";
					}
					else
					{
						cout << "more than one bus is allocated to you according to your requirenment:\n";
					}
					veh.set_value_vehical(n);
					//myfile << pro << "\t" << a << "\t" << old << "\t" << exp << "t" << n << endl;
					break;
				}

				case 3:
				{ 
				{
			
					int G;
					string p1;
					cout << "Enter the profession";
					cin >> p1;
					cout << "Enter your name";
					cin >> e;
					r->set_reg_name(e);
					cout << "Enter the gender of Guider";
					cin >> G;
					gu.set_Guid(G);
					cout << "Enter the age";
					cin >> b;
					cout << "Enter the exp";
					cin >> c1;
					r->set_driver_data(b, p1, c1);
					break;
				}
				case 4:
				{
					h2.display();
				}
				case 5:
				{
					goto jump4;
					break;
				}
				default:
					break;
				}
				goto jump;
				}
			}
		}
		else
		{
			cout << "User name and password does not exist:";
		}

	} 
	else if (choose == 2)
	{

		int op;
	jum:
	j:
	ju:
	jump1:
	jump2:
		//extract method
		manu();
		cin >> op;
		while (op != 8)
		{
			switch (op)
			{
			case 1:
			{
				cout << "****************************************\n";
				cout << "you can choose any place in the World\n";
				cout << "tour cost is set according to your tour period\n";
				cout << "please enter the tour information\n";
				cout << "******************************************\n";
				goto jum;
				break;
			}
			case 2:
			{
				string a;
				string c;
				ofstream myfile;
				myfile.open("Parsonal data.txt", ios::app);
				cout << "please enter your name:";
				cin >> a;
				s1->set_reg_name(a);
				cout << "Please enter the serial number:";
				cin >> b;
				cout << "please enter your number:";
				cin >> c1;
				cout << "please enter your complete addrees:";
				cin >> c;
				per.set_clint_info(b, c1, c);
				myfile << a << "\t" << b << "\t" << c1 << "\t" << c << endl;
				myfile.close();
				goto j;
				break;
			}
			case 3:
			{
				int m;
				cout << "please choose one of the following:\n";
				cout << "1:3days package:\n";
				cout << "2:7days package:\n";
				//cout << "3:15days package:\n";
				cin >> m;
				if (m == 1)
				{
					int o;
					cout << "choose one of the followings:\n";
					cout << "1:hotel:\n";
					cout << "2:guesthouse:\n";
					cin >> o;
					if (o == 1)
					{
						int x;
						cout << "choose one of the following:\n";
						cout << "1:medium range:\n";
						cout << "2:high range:\n";
						cin >> x;
						if (x == 1)
						{
							p.setcoast(800);
							cout << "your package is:";
							p.displaycoast();
						}
						else
						{
							p.setcoast(1238);
							cout << "your package is:";
							p.displaycoast();
						}
					}
					else
					{
						p.setcoast(20000);
						cout << "your package is:";
						p.displaycoast();
					}
				}
				else
				{
					int o;
					cout << "choose one of the followings:\n";
					cout << "1:hotel:\n";
					cout << "2:guesthouse:\n";
					cin >> o;
					if (o == 1)
					{
						int x;
						cout << "choose one of the following:\n";
						cout << "1:medium range:\n";
						cout << "2:high range:\n";
						cin >> x;
						if (x == 1)
						{
							p.setcoast(1200);
							cout << "your package is:";
							p.displaycoast();
						}
						else
						{
							p.setcoast(1838);
							cout << "your package is:";
							p.displaycoast();
						}
					}
					else
					{
						p.setcoast(30000);
						cout << "your package is:";
						p.displaycoast();
					}

					goto ju;
					break;
				}
			case 4:
			{
				string o1, o2;
				cout << "choice one:\n";
				cout << "1:for hotel:\n";
				cout << "2: for guest house:\n";
				int select;
				cin >> select;
				if (select == 1)
				{
					cout << "choose the hote\n1:medium class hotel\n2:high class hotel:\n";
					cin >> o1;
					h2.sethotel(o1);
				}
				else if (select == 2)
				{
					cout << "choose the gesthouse\n1:medium class geasthouse\n2:high class geasthouse\n";
					cin >> o2;
					h2.setgeasthouse(o2);
				}
				goto jump1;
				break;
			}
			case 5:
			{
				gu.display_guide();
				goto jump2;

			}
			case 6:
			{
				goto jump3;
			}
			default:
				break;
			}

			}
			system("pause");
		}


	}

}

