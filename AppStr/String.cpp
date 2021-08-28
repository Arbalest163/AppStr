#include "String.h"

int String::count{ 0 };

String::~String()
{
	if (_string != nullptr)
	{
		std::cout << "Destroy " << name <<  "\n";
		delete[] _string;
		count--;
	}
}

String::String(const char* string): _string(nullptr), _size(0)
{
	
	if (string == "" || string == nullptr)
	{
		_string = new char[_size + 1]{0};
		_string[_size] = '\0';
	}
	else
	{
		_size = strlen(string);
		_string = new char[_size + 1]{0};
		strcpy_s(_string, _size + 1, string);
		_string[_size] = '\0';
	}
	count++;
	name.append(std::to_string(count));
	std::cout << "Constructor default for " << name << "\n";
}

String::String(const String& Obj)
{
	*this = Obj;
	count++;
	name.append(std::to_string(count));
	std::cout << "Constructor Copy for " << name << "\n";
}

String::String(const String& Obj_1, const String& Obj_2)
{
	_size = Obj_1._size + Obj_2._size;
	_string = new char[_size + 1]{0};
	strcat_s(_string, _size + 1, Obj_1._string);
	strcat_s(_string, _size + 1, Obj_2._string);
	_string[_size] = '\0';
	count++;
	name.append(std::to_string(count));
	std::cout << "Constructor two parameters for " << name << "\n";
}

String& String::operator=(const String& Obj)
{
	std::cout << "Operator =  for " << name << "\n";
	if (this == &Obj)
	{
		return *this;
	}
	_size = Obj._size;
	delete[]_string;
	_string = new char[_size + 1]{0};
	strcpy_s(_string, _size + 1, Obj._string);
	_string[_size] = '\0';
	return *this;
}

String& String::operator=(const char* string)
{
	*this = String(string);
	return *this;
}

int String::GetSize()
{
	return _size;
}

void String::Clear()
{
	*this = String();
}

String& String::operator+(const String& Obj)
{
	String* tmp = new String(*this, Obj);
	return *tmp;
}

String& String::operator+=(const String& Obj)
{
	*this = *this + Obj;
	return *this;
}

bool String::operator==(const String& Obj)
{

	return !strcmp(this->_string, Obj._string);
}
bool String::operator!=(const String& Obj)
{
	return strcmp(this->_string, Obj._string);
}

