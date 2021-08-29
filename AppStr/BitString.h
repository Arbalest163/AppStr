#pragma once
#include "String.h"

class BitString : public String
{ 
private:
	char* _bitStr;
public:
	BitString(const char* string = "");
	BitString(const String& Obj);
	BitString(const String& Obj_1, const String& Obj_2);
	BitString& operator=(const String& Obj);
	BitString& operator=(const char* string) override;
	int GetSize();
	void Clear();
	BitString& operator+(const String& Obj);
	BitString& operator+=(const String& Obj);
	bool operator==(const String& Obj);
	bool operator!=(const String& Obj);
	char* getBitStr();
};

