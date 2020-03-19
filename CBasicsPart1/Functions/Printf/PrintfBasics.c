#include <stdio.h>

/*
____====____==== PRINTF ====____====____

Printf is the basic "output to the standard peripheral" function within C., typically sending messages to the screen unless some tinkering has been done.

The general form is: printf(controlString, [, data]);

==== ESCAPE SEQUENCES ====
C does not move the cursor to the next line automatically when printf is executed, so this must be specified by the programmer by using escape sequences.

\n === New line
\a === alarm (this one is fun)
\b === Backspace
\t === Tab
\\ === Backslash
\' === Single quotation mark
\" === Double quotation mark
\0 === String Terminator

==== CONVERSION CHARACTERS ====

C must be told exactly how to print characters, computers are dumb after all. Below are some of the more common ones.

%d === Integer
%.f === Float - the number of decimal places can be specified by adding a number between . and the f. The default (without the .) is 6.
%c === Character
%s === String

To print a value within a string, one can insert these characters, alongside instructions providing the number itself.
While %s does not need to be used to print a string on its own, it can be used to insert strings alongside other data if so desired.
*/

main() {
	printf("My favourite number is: %d\n\a", 7);
}