#include "BitString.h"

int main()
{

	String str("utuio");
	String str2(str);
	str = "QWERTY";
	String str3 = str + str2;
	str3 += str3;
	std::cout << str2.getStr() << "  " << str2.GetSize() << std::endl;
	std::cout << str.getStr() << "  " << str.GetSize() << std::endl;
	std::cout << str3.getStr() << "  " << str3.GetSize() << std::endl;
	BitString bstr_1("-6456846");
	std::cout << bstr_1.getBitStr() << "  " << std::endl;
}
