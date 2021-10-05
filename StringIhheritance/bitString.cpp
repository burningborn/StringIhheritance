#include <iostream>
using namespace std;
#include "bitString.h"
#include <string.h>
#include <stdlib.h>

bool bitString::biTester(const char* str)
{
	int size = strlen(str);
	if (!str)return false;
	for (int i = 0; i < size; i++) {
		if (str[i] != '0' && str[i] != '1')
			return false;
	}
	return true;
}

bitString::bitString()
{
	str = nullptr;
	length = 0;
}

bitString::~bitString() { this->str = nullptr, length = 0; }


bitString& bitString::operator=(const bitString& other){
	myString::operator=(other);
	return *this;
}

bitString bitString::operator+(bitString& other) 
{
	bitString Temp;
	int size = this->length + other.length;
	Temp.str = new char[size + 1];
	int j = 0;
	for (int i = 0; i < size; i++) {
		if (i < this->length) {
			Temp.str[i] = this->str[i];
		}
		else
		{
			Temp.str[i] = other.str[j++];
		}
	}
	Temp.str[size] = '\0';
	return Temp;
}
bitString bitString::operator+=(bitString& other)
{
	return *this = *this + other;
}
bool bitString::operator==(bitString& other)
{
	if(myString::operator==(other)) return true;
	else return false;
}
bool bitString::operator!=(bitString& other)
{
	if (myString::operator!=(other)) return true;
	else return false;
}


void bitString::display()
{
	myString::display();
}
