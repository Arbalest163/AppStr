#include "BitString.h"

BitString::BitString(const char* string) : _bitStr(new char[255])
{
	_itoa_s(atoi(string), _bitStr, 255, 2);

}

BitString::BitString(const String& Obj)
{
}

BitString::BitString(const String& Obj_1, const String& Obj_2)
{
}

BitString& BitString::operator=(const String& Obj)
{
	return *this;
}

BitString& BitString::operator=(const char* string)
{

	return *this;
}

int BitString::GetSize()
{
	return 0;
}

void BitString::Clear()
{
}

BitString& BitString::operator+(const String& Obj)
{
	return *this;
}

BitString& BitString::operator+=(const String& Obj)
{
	return *this;
}

bool BitString::operator==(const String& Obj)
{
	return false;
}

bool BitString::operator!=(const String& Obj)
{
	return false;
}

char* BitString::getBitStr()
{
	return _bitStr;
}
