#ifndef MY_STAFF
#define MY_STAFF

#include <iostream>

using namespace std;

class Staff
{
public:
	Staff (const string& name, const int& salary);
	Staff ();
	


	void set_salary(const int& salary);
	const int get_salary() const;

	void set_name(const string& name);
	const string get_name() const;
	

protected:
	int m_salary;	
	string m_name;
};
#endif
