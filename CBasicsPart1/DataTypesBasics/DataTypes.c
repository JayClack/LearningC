#include <stdio.h>

/*
DATA TYPE BASICS:
The three most common data types are: characters, integers, and floating point numbers.

There are 256 possible standard characters in the ASCII table. If a number is regarded as a character, you cannot do maths with it.
Characters are enclosed by apostrophes (single quotation) to distinguish them from similar forms, for example + (arithemetic operation) and '+', the character.
Strings are strings of characters, specific by double quotation marks.

Integers are whole numbers and should never be started with a 0, or C will assume the number is Octal (just 0) or Hexdecimal (0x or 0X), when Decimal is more likely.

Numbers with decimal points are represented as floating point. In this case, leading zeroes are fine. Floating points are allocated more memory, so should be used only when needed.

Allocated data storage is different depending on the compiler used.
*/

main() {
	printf("I am learning the %c programming language.\n", 'C');
	/*The %c operator is used to substitute a character.*/

	printf("This is file number %d.\n", 2);
	/*The %d or %i can be used to substitute a signed decimal integer.*/

	printf("I am %.1f percent ready to continue.\n", 99.9);
	/*The %f can be used to substitute a floating point number. The .1 indicates the precision of the number.*/
}