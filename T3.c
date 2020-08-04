/* Title    : String in C
    Date
    */

#include <stdio.h>

int main()
{   
    // Method One - Array
    char helloworld[]= "Hello World!";

    // Method Two - Pointers
    char* helloworld2= "Hello World!";
    
    printf("%s\n", helloworld);
    printf("%s\n", helloworld2);
}