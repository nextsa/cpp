#include "manager.h"

extern int err_code;

Manager::Manager(const string& name, const int& salary, const int& roomnum) : Staff (name, salary),

m_roomnum {roomnum}
{
		
}

Manager::Manager():
m_roomnum {-1}
{

}



void Manager::set_room(const int& roomnum)
{
	m_roomnum = roomnum;
}

const int Manager::get_room() const
{
	return m_roomnum;
}

void Manager::add(const Worker& w)
{
	m_wrkrs.push_back(w);
}

void Manager::output_list_wrkrs() const
{
	for (auto w : m_wrkrs)
	{
		cout << w.get_name() << '\t';
	}
	cout << endl;
}

Worker Manager::get_maxsalary() const
{
	Worker max_w;
	int max = 0;	
	for (auto w : m_wrkrs)
	{
		if (w.get_salary() > max)
		{
			max = w.get_salary();
			max_w = w;
		}
	}
	
	return max_w;
}

bool Manager::remove(const string& name)
{
	bool ret = false;
	vector <Worker>::iterator remove_it = m_wrkrs.end();
	for (vector <Worker>::iterator it = m_wrkrs.begin(); it!=m_wrkrs.end(); it++)
	{
		if ((*it).get_name() == name)
		{
			remove_it = it;
		}
	}
	if (remove_it != m_wrkrs.end())
	{
		m_wrkrs.erase(remove_it);
		ret = true;
	}
	else
	{
//		string err_str = name + " - such worker don't exists";
//		throw(err_str);
		err_code = 1;
	}

	return ret;
}
