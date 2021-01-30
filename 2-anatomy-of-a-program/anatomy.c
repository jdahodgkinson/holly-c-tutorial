// This file is annotated with COMMENTS.
// Comments are parts of our code, which the computer will not read.
// Single-line comments like this one are prepended with a "//".

/*
Comments can be spread over multiple lines by starting them with a "/*"
... and ending them with a "* /" (but with the space between them 
removed!)
*/

// As the computer ignores comments, we can write ANYTHING in them.
// We should use them OFTEN, to document how our programs work.

/*
They will help people who use our programs after we write them. 
and more importantly help OURSELVES when we forget how they're 
supposed to work!
*/

/*
You can even use comments to remove pieces of code you're not using
at the moment (maybe because they're broken!).
*/

// #include<stdbool.h>

// bool badFunction() {
//     bool isBad = true;
//     return isBad;
// }

/*
Now (finally!) we are going to use comments to annotate the program
we saw before...
*/

/*
stdio.h is a HEADER file (hence the .h). It is basically a list of 
functions that have already been written (by us or someone else). 
Including a header file by writing #include<example.h>, allows us to use
any of those functions in our own code. In this instance, we need 
stdio.h (standard input/output) to use the printf() function, which 
printed out "Hello, World!".
*/
#include<stdio.h>

/*
greet() is a FUNCTION. Functions are one of the core building blocks
of the vast majority of programming languages. We will be using them
ALL of the time. As hinted above, sometimes these will be functions we
write ourselves, like greet and add here, and sometimes those written
for us, such as printf below.

char* tells us what TYPE of thing we can expect a function to give us.
For now, just read 'char*' to mean a list of characters, commonly
referred to as a 'string'. As you can see, greet RETURNS 
"Hello, World!\n", which is indeed a string.

The words before the '()' specify the function's name, the word we 
use to call it throughout the program. 

Inside the '()' are the program's ARGUMENTS i.e. the pieces of data it
requires to do it's job. As we can see, greet() needs no information to
simply return "Hello, World!\n", so it has no arguments...
*/
char* greet() {
    return "Hello, World!\n";
}

/*
... unlike add() here. add() takes two numbers (a and b) and adds them
together. Not only do we have to specify add's RETURN TYPE (an int, 
short for "integer"), we have to specify the types of its arguments,
both of which are also ints.
*/
int add(int a, int b) {
    int c = a + b;
    return c;
}

/*
main() is a function just like greet() and add(), with one key 
difference: it is the entry point to your program. To run a program, as 
we have been doing, it must DEFINE a main() function. In C, main() must
return an int. Customarily, we return 0 if everything worked as
expected and 1 if something went wrong.
*/
int main() {
    char *greeting = greet();
    printf(greeting);

    int x = add(1, 2);
    printf("%d\n", x);

    return 0;
}