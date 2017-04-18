#include <iostream>
#include"staff.h"
#include "manager.h"
#include "worker.h"
#include <string>

using namespace std;

int err_code = 0;

int main()
{
	Manager a1 {"Peter", 2300, 481};
	cout << a1.get_name() << '\t' << a1.get_salary() << '\t' << a1.get_room() << endl;

	Worker d1 {"Sindie", 410, "needle"};
	cout << d1.get_name() << '\t' << d1.get_salary() << '\t' << d1.get_instrument() << endl;
	


/*	Staff s1;
	s1.set_salary(1000);
	
	cout <<	s1.get_salary() << endl;
*/
/*
	Manager m1;
	m1.set_salary(1000);
	m1.set_room(235);
	
//	cout << m1.get_salary() << '\t' << m1.get_room() << endl;

	Worker w1;
	w1.set_salary(590);
	w1.set_instrument("axe");
	w1.set_name("John");
	m1.add(w1);	
//	cout << w1.get_salary() << '\t' << w1.get_instrument() << endl;

	Worker w2;
	 
	w2.set_salary(720);
	w2.set_instrument("knife");
	w2.set_name("Jack");
	m1.add(w2);

	m1.output_list_wrkrs();
	cout << "removing" << endl;
*/

//	m1.remove("Bill");
/*	if (m1.remove("Bill") == true)
	{
		m1.output_list_wrkrs();
	}
	else
	{
		cout << "Worker don't exsists" << endl;
	}
*/

/*	try
	{
		m1.remove("Bill");
		m1.output_list_wrkrs();
	}
	catch (string err_msg)
	{
		cout << err_msg << endl;
		return 1;
	}
*/
/*	m1.remove("John");
	if ( err_code == 0)
	{
		m1.output_list_wrkrs();
	}
	else
	{
		cout << "Worker don't exsists" << endl;
	}
*/


//	cout << m1.get_maxsalary() << endl;
//	Worker w3 = m1.get_maxsalary();
//	cout << "Max salary: " << w3.get_name() << endl;

	return 0;
}
