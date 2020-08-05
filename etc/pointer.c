/*
Title : Pointer 

*/

#include <stdio.h>
int main()
{
    int age=30;
    int * pAge = &age;          // pAge store memory address of age variable



    printf("%d\n", age);        // print value in age variable
    printf("%p\n",&age);        // print memory address which store age variabl
    printf("%d\n",*pAge);       // print value in age variable
    printf("%p\n",pAge);        // print memory address of age variable
    return 0;
}