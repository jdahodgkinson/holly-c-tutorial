/*
As referenced before, C classifies different kinds of data into TYPES.
All variables and functions must specify a type when they're 
DECLARED (introduced to the program). After that, they can be 
ignored. In C, types are STATICALLY TYPED. This means that if I declare
a variable, say:
*/

// int a = 4;

// Later writing:

// a = "holly"

/*
Would raise an error, as a was declared as an int and one is now 
attempting to redefine it to char* (which, remember, is a string).
You are safe to redefine variables, so long as they maintain their 
type. So:
*/

// a = 5;

// is just fine.

/*
C defines a fair few types for us. The ones we will focus on at the 
moment are:

int - whole numbers e.g. 4, 5, 81, 272000
bool - true/false values (requires #include<stdbool.h>)
char - single chararacters e.g. 'a', 'b', 'h', 'j' (wrapped in single quotes)
char* - text strings e.g. "a", "hello", "holly", "jack" (wrapped in double quotes)
float/double - floating-point (i.e. non-whole numbers) e.g. 3.14, 0.1.

float and double both represent the same concept but to differing 
points of PRECISION. float can be used for up to six decimal places, 
whereas double can be used for numbers with up to fifteen decimal
places, at the cost of requiring more memory. Use whichever is 
appropriate at the time.
*/

/*
Variables do not need to be INSTANTIATED, when they're declared. To
instantiate a value, simply means to assign it a value for the first
time.  
*/

#include<stdio.h>
#include<stdbool.h>

int main() {
    int meaningOfLife;
    meaningOfLife = 42;
    bool catsAreCute = true;
    bool isABadBoy = false;

    char* greatBook = "Hitchiker's Guide";

    char initialJ, initialH;
    initialJ = 'J';
    initialH = 'H';

    float pi = 3.14;
    double bigPi = 3.14159265358979323;

    printf("%s\n", greatBook);
    printf("%d\n", meaningOfLife);
    return 0;
}