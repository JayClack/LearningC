#include <stdio.h>

/*
____====____====Variables====____====____

As in Python, data in C is stored using variables.

Different types of variables contain different data types, a stark difference from python where variables do not need to have a data type specified before use. 

The size of the variable will also vary, depending on the data type contained therein.

Constant data is also sometimes referred to as literal data. Such data cannot be changed, like numbers; 3 is 3, 4 is 4, and so on.

====THE MOST COMMON DATA TYPE NAMES====

char === contains character data
int === contains integer data
float === contains floating point data
double === contains floats that require larger amounts of data, such as extremely large or extremel small floats.

The sizeof operator can be used to determine the amount of data that can be assigned to a variable, depending on the declared type of the variable.

Variable names can contain between 1 and 31 characters, though some compilers may allow more, and must begin with a letter.

====DEFINING VARIABLES====

Variables must be declared before use. This is to allow C to reserve memory to store the variable. Multiple variables of the same type can be declared simultaneously.

Variables contained within braces are local variables, though this will be expanded on further in later chapters of the book.

The assignment operator is simply =.
*/

main() {
	int exampleInteger, secondExampleInteger;
}