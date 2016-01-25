//Implementiert große Integer
#ifndef _M_INT_H
#define _M_INT_H
#include <vector>

class m_int
{
public:
	m_int();
	m_int(int other);
	m_int(const m_int& other);
	~m_int();
	m_int& operator=(const m_int& other);
	m_int& operator=(const int& other);
	m_int& operator+();
	print();
private:
	std::vector<int> content;
};

#endif