#pragma once

class String
{
protected:
	char* string;
	int length;
public:
	String();                    //����������� �� ���������
	String(const char* string);  //����������� ����������� ������
	String(const String& other); //����������� �����������
	~String(){}

	��� ���_

	String& operator=(String& ohter);
	String& operator+(String& ohter);
	String& operator+=(String& ohter);


};

