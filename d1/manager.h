#include "staff.h"
#include "worker.h"
#include <vector>
#include <string>

class Manager : public Staff
{
public:
	Manager(const string& name, const int& salary, const int& roomnum);
	Manager();


	void set_room(const int& roomnum);
	const int get_room() const;

	void add(const Worker& w); 
	void output_list_wrkrs() const;
	Worker get_maxsalary() const;
	bool remove(const string& name);

protected:
	int m_roomnum;
	vector <Worker> m_wrkrs;
};
