#include<stdio.h>

char* greet() {
    return "Hello, World!\n";
}

int add(int a, int b) {
    int c = a + b;
    return c;
}

int main() {
    char *greeting = greet();
    printf(greeting);

    int x = add(1, 2);
    printf("%d\n", x);

    return 0;
}