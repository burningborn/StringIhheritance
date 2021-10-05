#include <iostream>
using namespace std;
using std::string;
using std::cout;
using std::cin;
#include "myString.h"
#include "bitString.h"
#include <string>

#define BASE_CLASS
//#define CHILD_CLASS

#define delimiter "\n==============================================\n\n"

void main(){
	setlocale(LC_ALL, "Russian");

#ifdef BASE_CLASS
	myString strObj1("Test");
	myString strObj2("_World");
	cout << "strObj1: "; strObj1.display();
	cout << "strObj2: "; strObj2.display();
	cout << delimiter;

	myString res = strObj2;                 //проверка оператора присваивания
	cout << "res = strObj2: "; res.display();
	res = strObj1 + strObj2;				//проверка оператора сложения
	cout << "strObj1 + strObj2: "; res.display();
	res += strObj2;							//проверка оператора плюс равно			
	cout << "res += strObj2: "; res.display();
	cout << delimiter;
	
	bool equal = strObj1 == strObj1;
	cout << "strObj1 == strObj1: result - "; cout << equal << endl;					//проверка оператора равно
	equal = strObj1 != strObj1;
	cout << "strObj1 != strObj1: result - "; cout << equal << endl;					//проверка оператора не равно
	cout << delimiter;
	
	strObj1.clear();
	strObj1.display();						//проверка оператора очистки строки
	strObj1 += strObj2;
	strObj1.display();
	cout << delimiter;

#endif // BASE_CLASS

#ifdef CHILD_CLASS

	bitString A("01");
	cout << "A: "; A.display();
	bitString B("011");
	cout << "B: "; B.display();
	bitString C("123");
	cout << "C: "; C.display();							//небинарное число
	A = B;												//присваивание
	cout << "A = B: "; A.display();
	bitString test1 = A + B;							//сложение
	cout << "A + B - "; test1.display();
	test1 += B;												//плюс равно
	cout << "test1 += B - "; test1.display();
	bool equalBit = A == B;								//проверка на равенство
	cout << "A == B: result - " << equalBit << endl;
	equalBit = A != B;									//проверка нп неравенство
	cout << "A != B: result - " << equalBit << endl;

#endif // CHILD_CLASS

}