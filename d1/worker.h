#ifndef MY_WORKER
#define MY_WORKER

#include "staff.h"
#include <string>

class Worker : public Staff
{
public:
	Worker(const string& name, const int& salary, const string& instrument_name);
	Worker();


	void set_instrument(const string& instrument_name);
	const string get_instrument() const;
		
protected:
	string m_instrument_name;
	
};
#endif
