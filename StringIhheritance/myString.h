#pragma once

/*
 Описать базовый класс СТРОКА.
Обязательные поля класса:
конструктор без параметров;
конструктор, принимающий в качестве параметра Си-строку (заканчивается нулевым байтом);
конструктор копирования;
конструктор присваивания;
получение длины строки;
очистка строки (делать строку пустой);
деструктор;
операторы: присваивание (=);
сложение (+);
плюс равно(+=)
проверка на равенство (= =) и неравенство(+=);
*/

class myString
{
protected:
	char* str;            //массив символов
	int length;           //длина троки

public:
	myString();								//конструктор без параметров
	myString(const char* str);				//конструктор принимающий строку
	myString(const myString& other);		//конструктор копирования
	~myString();							//деструктор

	int get_length();
	void set_length(int n);
	//void set_str(char str);

											//Операторы

	myString& operator=(const myString& other);					//оператор присваивания
	myString operator+(myString& other);						//оператор сложения
	myString operator+=(myString& other);						//оператор плюс равно
	myString& clear();											//очистка строки
	bool operator==(myString& other);							//оператор сравнения равно
	bool operator!=(myString& other);							//оператор сравнения не равно

	void display();

};

