#include "worker.h"

Worker::Worker(const string& name, const int& salary, const string& instrument_name) : Staff (name, salary),
m_instrument_name {instrument_name}
{
	
}

Worker::Worker():
m_instrument_name {"none"}
{

}

void Worker::set_instrument(const string& instrument_name)
{
	m_instrument_name = instrument_name;
}

const string Worker::get_instrument() const
{
	return m_instrument_name;
}


