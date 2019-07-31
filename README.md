# _printf
This printf function use the same methodology for normal output function depending on the format and returning the size of the string
## The prototype is
```
int _printf(const char *format, ...);
```
<img align="center" src="https://microchip.wdfiles.com/local--files/tls2101%3Aprintf/printf2.png" width="100%" />

## How to use it

### First you have to add the holberton library. "holberton.h"

Because there are the prototypes functions that you will need to execute the _printf function
```
#include "holberton.h"
```
Then compile just like that ⇣
```
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c holberton.h -o <nameofexecutable>
```
And execute it easily ⇣
```
./"nameofexecutable"
```
### Some examples of how to call the function _printf
## To print a normal String.
```
_printf("your string");
```
## To print a normal variable type char use %c.
```
_printf("My name begin for %c", varibale);
```
## To print a normal a pointer to char use %s.
```
_printf("your name is %s", pointer_to_char);
```
## To print a normal a decimal number user %d.
```
_printf("you have %d years", your_variable);
```
## To print a normal an integer use %d.
```
_printf("you have %i years", your_variable);
```
## To print a normal an usigned int use %u.
```
_printf("you have %u years", your_variable);
```
## To print a normal an octal use %o.
```
_printf("you have %o years", your_variable);
```
## To print a normal an hexadecimal  use %x.
```
_printf("you have %x years", your_variable);
```
## To print a normal an Upper Hexadecimal use %X.
```
_printf("you have %X years", your_variable);
```
# printf
