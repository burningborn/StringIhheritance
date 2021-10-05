#pragma once

class String
{
protected:
	char* string;
	int length;
public:
	String();                    //конструктор по умолчанию
	String(const char* string);  //конструктор принимающий строку
	String(const String& other); //конструктор копирования
	~String(){}

	ште пуе_

	String& operator=(String& ohter);
	String& operator+(String& ohter);
	String& operator+=(String& ohter);


};

