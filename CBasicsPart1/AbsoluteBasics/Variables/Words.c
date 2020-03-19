#include <stdio.h>
#include <string.h>

/*
====WORDS====
There are no dedicated string variable data types, but still, there is a way to store them!

Every string has a null 0 on the end, known by a variety of names; Null zero, binary zero, string terminator, ASCII0, or \0 are all used.
The null terminator may be visible when a string literal is displayed, yet the terminator is still there in memory.

In ASCII the terminator is the first character, while '0' is ASCII 48.

The length of the string is the number of characters, not including the null terminator.

Character arrays are used to store strings in memory. An array is simply a list of values of a single type. One must also specify the max number of characters when declaring an array.
Enough space must be left for the null terminator. Arrays are also zero-indexed.

If a string is defined at the same time as declaration, it is not necessary to specify max length, but this is still allowed if you need more data in the future.
A string can only be assigned to a variable during declaration. If the string must be reassigned, this must be done either one char at a time, or using the strcpy() function.
*/

main() {
	char month[10] = "January";
	printf(month);

	strcpy(month, "February");
	printf("\n%s", month);
}