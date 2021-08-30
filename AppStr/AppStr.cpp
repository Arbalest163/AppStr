#include "BitString.h"

int main()
{

	String str(-156);
	String str2(str);
	str = "QWERTY";
	String str3 = str + str2;
	str3 += str3;
	std::cout << str2.getStr() << "  " << str2.length() << std::endl;
	std::cout << str.getStr() << "  " << str.length() << std::endl;
	std::cout << str3.getStr() << "  " << str3.length() << std::endl;
	BitString bstr_1("254");
	//bstr_1.Clear();
	std::cout << bstr_1.getStr() << "  " << bstr_1.length() << std::endl;

}
