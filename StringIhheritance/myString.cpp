#include <iostream>
using namespace std;
#include "myString.h"
#include <string.h>
#include <stdlib.h>

myString::myString() { str = nullptr, length = 0; }//конструктор без параметров

myString::myString(const char* str){		//конструктор с параметрами
	length = strlen(str);					//вычисляем длину строки
	this->str = new char[length + 1];       //выделяем память для строки + один элемент для '\0' как указатля на конец строки
	for (int i = 0; i < length; i++) {		
		this->str[i] = str[i];				//копируем символы в наш массив поэлементно
	}
	this->str[length] = '\0';				//добавляем в конце масссива терменирующий ноль

}

myString::myString(const myString& other)   //конструктор копирования
{
	length = strlen(other.str);				//вычисляем длину строки
	str = new char[length + 1];				//выделяем память для строки + один элемент для '\0' как указатля на конец строки
	for (int i = 0; i < length; i++) {
		this->str[i] = other.str[i];		//копируем символы в наш массив поэлементно
	}
	this->str[length] = '\0';				//добавляем в конце масссива терменирующий ноль
}

myString::~myString() { delete[] str; }


int myString::get_length() { return length; }
void myString::set_length(int n) { this->length = n; }

myString& myString::operator=(const myString& other)
{
	if (this->str != nullptr) {
		delete[] str;
	}
	this->length = other.length;				//вычисляем длину строки
	this->str = new char[length + 1];				//выделяем память для строки + один элемент для '\0' как указатля на конец строки
	for (int i = 0; i < length; i++) {
		this->str[i] = other.str[i];		//копируем символы в наш массив поэлементно
	}
	this->str[length] = '\0';				//добавляем в конце масссива терменирующий ноль
	return *this;
}

myString myString::operator+(myString& other)
{
	myString Temp;
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

myString myString::operator+=(myString& other)
{		
	return *this = *this + other;
}

myString& myString::clear()
{
	 
	 this->str = nullptr;
	 this->length = 0;
	 return *this;
}

bool myString::operator==(myString& other)
{
	if(this->length!=other.length) return false;
	for (int i = 0; i < this->length; i++) 
	{
		if (this->str[i] != other.str[i]) { return false; }
	}
	return true;
}

bool myString::operator!=(myString& other)
{
	if (*this==other){ return false; }
	return true;
}

void myString::display()
{
	if (str == nullptr) { cout << " String is EMPTY now \n"; }
	else { cout << str << endl; }
}


