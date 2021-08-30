#pragma once
#include "String.h"

class BitString : public String
{ 
public:
	virtual ~BitString();
	BitString(const char* string = "");
	BitString(const BitString& Obj);
	BitString(const BitString& Obj_1, const BitString& Obj_2);
	BitString& operator=(const BitString& Obj);
	BitString& operator=(const char* string);
	BitString& operator+(const BitString& Obj);
	BitString& operator+=(const BitString& Obj);
	bool operator==(const BitString& Obj);
	bool operator!=(const BitString& Obj);
	//virtual void Clear() override;
};

