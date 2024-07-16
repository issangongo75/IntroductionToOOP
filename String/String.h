//String
#pragma once
#include<iostream>
using namespace std;
#define delimiter "\n-------------------------------\n"

class String;
String operator+(const String& left, const String& right);
std::ostream& operator<<(std::ostream& os, const String& obj);

class String
{
	int size;
	char* str;
public:
	int get_size()const;
	const char* get_str()const;
	char* get_str();


	explicit String(int size = 80);
	String(const char str[]);
	String(const String& other);
	String(String&& other)noexcept;
	~String();
	//       Operators
	String& operator=(const String& other);
	String& operator=(String&& other)noexcept;
	//        Methos
	void print()const;
};