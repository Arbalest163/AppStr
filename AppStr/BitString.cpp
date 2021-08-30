#include "BitString.h"

BitString::~BitString()
{
}

BitString::BitString(const char* string)
{
	if (string != nullptr) {
		char buf[255]{0};
		_itoa_s(atoi(string), buf, 2);
		_size = strlen(buf);
		_string = new char[_size + 1];
		strcpy_s(_string, _size + 1, buf);
	}
	
}

BitString::BitString(const BitString& Obj)
{
}

BitString::BitString(const BitString& Obj_1, const BitString& Obj_2)
{
}

BitString& BitString::operator=(const BitString& Obj)
{
	return *this;
}

BitString& BitString::operator=(const char* string)
{

	return *this;
}


BitString& BitString::operator+(const BitString& Obj)
{
	return *this;
}

BitString& BitString::operator+=(const BitString& Obj)
{
	return *this;
}

bool BitString::operator==(const BitString& Obj)
{
	return false;
}

bool BitString::operator!=(const BitString& Obj)
{
	return false;
}

