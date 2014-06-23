#include "cstring"

string::string()
{
	m_data=new char[1];
	m_data[0]='\0';
	m_data_len=0;
}

string::string (const string& str)
{
	
}

string::string (const string& str, int pos, int len)
{

}

string::string (const char* s)
{

}

string::string (const char* s, int n)
{

}

string::string (int n, char c)
{

}

string::~string()
{
	delete[] m_data;
}
