#include "String.h"
#include <string.h>

String::String() : string(0), length(0){}

String::String(char* string){
	length = strlen(string);
	string = new char[length + 1];
}

