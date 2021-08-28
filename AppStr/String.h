#pragma once
#include <iostream>
#include <string>
/*
������:
1) ����������� ��� ����������;
2) �����������, ����������� � �������� ���������
C - ������(������������� ������� ������);
3) ����������� �����������;
4) �������� ������������;
5) ��������� ����� ������;
6) ������� ������(������� ������ ������);
7) ����������;
8) ������������ �����(����������� ��������� + � += );
9) �������� �� ���������(= = ) � �� �����������(!= ).
*/
class String
{
private:
	std::string name{"Obj "};
	static int count;
	char* _string;
	int _size;
public:
	virtual ~String();
	String(const char* string = "");
	String(const String& Obj);
	String(const String& Obj_1, const String& Obj_2);
	virtual String& operator=(const String& Obj);
	virtual String& operator=(const char* string);
	virtual int GetSize();
	virtual void Clear();
	virtual String& operator+(const String& Obj);
	virtual String& operator+=(const String& Obj);
	virtual bool operator==(const String& Obj);
	virtual bool operator!=(const String& Obj);
	char* getStr() { return _string; }

};


