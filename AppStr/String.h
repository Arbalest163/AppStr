#pragma once
#include <iostream>
#include <string>

class String
{
protected:
	char* _string;
	int _size;
public:
	virtual ~String();
	String(const char* string = "");
	String(const int number);
	String(const String& Obj);
	String(const String& Obj_1, const String& Obj_2);
	String& operator=(const String& Obj);
	String& operator=(const char* string);
	virtual int length();
	virtual void Clear();
	String& operator+(const String& Obj);
	String& operator+=(const String& Obj);
	bool operator==(const String& Obj);
	bool operator!=(const String& Obj);
	virtual char* getStr();

};


