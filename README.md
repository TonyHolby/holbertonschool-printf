> Project C - printf

> Description of the project

This project is an implementation of the printf function.

> Command of compilation

The command to compil the program :
./_printf

> Requirements

To compil this program it is necessary to use Ubuntu 20.04, the GCC compiler and git.

> Examples of use of the printf function

Here is some examples of the use of the printf function :
To print a string :
#include "main.h"

int main(void)
{
	sentence = "Hello world !";
	_printf("%s", sentence);
	return (0);
}

To print a character :
#include "main.h"

int main(void)
{
        c = 'z';
        _printf("%c", c);
        return (0);
}

> Man page

NAME.

_printf

SYNOPSIS.

#include <stdio.h>
int printf(const char *restrict format, ...);

DESCRIPTION.

The printf function is a formatted output function used to display text on the console or other output devices.

OPTION.

%c : Displays a character supplied as an argument.

char letter = 'A';
printf("%c"\n, letter); 

Letter is a argument of %c, %c display A.


%s : Displays a character string supplied as an argument .

Char *hello = "hello world"
printf("%s\n", hello);


Hello is a argument of %s, %s display hello world.

%d : Displays decimal integers given as an argument.

int n = 42;
printf("%d\n", n);

n is a argument of %d, %d display 42.

%i : Displays decimal, octal and hexadecimal integers.

int n = 42;
int n2 = 052; /number octal (42)/
int n3 = 0x2A; /number hexadecimal (42)/
printf("%d\n", n);
printf("%d\n", n2);
printf("%d\n", n3);

n, n2, n3, is a argument of %d,%d will convert all its integers and therefore display 42.

> Testing

Explanation of the code :
Step 0:
A string is passed in parameter to the _printf funcion by using a format. The _printf function returns always 0. The macros va_list and va_start are used to declare and initialize the arguments of the format. A first loop allows to iterate on the arguments of the format. Next a boolean condtion checkouts if the argument is a '%' symbol. If the argument is the '%' symbol, then a second loop allows to compare the next argument to a list of conversion speciers. If there is a match, then a call to the corresponding function is performed (see the step 1). If there no match the argument is print. The va_end macros stpo the macros.

Step 1:
Once the call to the corresponding function is trigerred, the argument is passed in parameter. If the argument is a string, the print_string function checkouts if the string is NULL in returning 0 and else print the string character by character in returning the number of character printed.

Valgrind step :
Valgrind is a tool suite that provides a number of debugging and profiling tools that help to confirm if the allocation of memory creates memory leaks.

> Flowchart

![flowchart](https://github.com/TonyHolby/holbertonschool-printf/assets/158024260/bdf9e87b-d0e6-4c1b-973d-82d375a6e4a2)


