#include"String.h"

//#define CONSTRUCTORS_CHECK
#define CALLING_CONSTRUCTORS
void main()
{
	setlocale(LC_ALL, "");
#ifdef CONSTRUCTORS_CHECK
	String str1;
	str1.print();

	//String str2 = 8;
	String str2(8);
	str2.print();

	String str3 = "Hello";
	str3 = str3;
	str3.print();

	String str4 = "World";
	str4.print();
	cout << str3 << endl;
	cout << str4 << endl;

	//String str5 = str3 + str4;
	cout << delimiter << endl;
	String str5;
	str5 = str3 + str4;
	//str5.print();
	cout << str5 << endl;
	cout << delimiter << endl;
#endif // CONSTRUCTORS_CHECK

#ifdef CALLING_CONSTRUCTORS
	String str1;
	str1.print();

	String str2(8);
	str2.print();
	String str3 = "Hello";
	str3.print();

	String str4();
	//str4.print();
	String str5{};
	str5.print();


	//String str6 = str3;
	//String str6(str3);
	String str6{ str3 };
	str6.print();
#endif // CALLING_CONSTRUTORS

}

