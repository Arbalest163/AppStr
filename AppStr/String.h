#pragma once
#include <iostream>
#include <string>
/*
Методы:
1) конструктор без параметров;
2) конструктор, принимающий в качестве параметра
C - строку(заканчивается нулевым байтом);
3) конструктор копирования;
4) оператор присваивания;
5) получение длины строки;
6) очистка строки(сделать строку пустой);
7) деструктор;
8) конкатенация строк(перегрузить операторы + и += );
9) проверка на равенство(= = ) и на неравенство(!= ).
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


