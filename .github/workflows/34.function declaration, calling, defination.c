#include <stdio.h>

int add(int a, int b);

int main() {
   
    printf("A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions. ... A function declaration tells the compiler about a function's name, return type, and parameters.\n\n\n");
    int a=10, b=20;
    add(a,b);
    
    return 0;
}

int add(int a, int b){
   int sum = a+b;
    printf("%d", sum);
}
