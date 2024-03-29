> # Project C - printf



# Description of the project

This project is an implementation of the printf function.


# Command of compilation

The command to compil the program :

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c


# Requirements

To compil this program it is necessary to use Ubuntu 20.04, the GCC compiler and git.


# Examples of use of the printf function

Here is some examples of the use of the printf function :

To print a string :
```
#include "main.h"

int main(void)
{
	sentence = "Hello world !";
	_printf("%s", sentence);
	return (0);
}
```

```
stdout: Hello world !
```

To print a character :
```
#include "main.h"

int main(void)
{
        c = 'z';
        _printf("%c", c);
        return (0);
}
```

```
stdout: z
```

# Testing

Explanation of the code :
Step 0:
A string is passed in parameter to the _printf funcion by using a format. The _printf function returns always 0. The macros va_list and va_start are used to declare and initialize the arguments of the format. A first loop allows to iterate on the arguments of the format. Next a boolean condtion checkouts if the argument is a '%' symbol. If the argument is the '%' symbol, then a second loop allows to compare the next argument to a list of conversion speciers. If there is a match, then a call to the corresponding function is performed (see the step 1). If there no match the argument is print. The va_end macros stpo the macros.

Step 1:
Once the call to the corresponding function is trigerred, the argument is passed in parameter. If the argument is a string, the print_string function checkouts if the string is NULL in returning 0 and else print the string character by character in returning the number of character printed.

Valgrind step :
Valgrind is a tool suite that provides a number of debugging and profiling tools that help to confirm if the allocation of memory creates memory leaks.

# Flowchart


![Flowchart - _printf function drawio](https://github.com/TonyHolby/holbertonschool-printf/assets/159525275/7f482fac-b8bc-4d0e-8fe6-27c526b76e55)


# Authors

Jean-alexandre ROGER
Ilhan BEN BOUZIANE
Tony NEMOUTHE
