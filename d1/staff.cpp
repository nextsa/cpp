#include "staff.h"
#include <string>

Staff::Staff (const string& name, const int& salary):
m_name {name},
m_salary {salary}
{
	
}


Staff::Staff():
m_name {""},
m_salary {0}
{
	
}


void Staff::set_salary(const int& salary)
{
	m_salary = salary;
}
	
const int Staff::get_salary() const
{
	return m_salary;
}

void Staff::set_name(const string& name)
{
	m_name = name;
}

const string Staff::get_name() const
{
	return m_name;
}

