/*
Title   : C hello world
Purpose : Introduce C and Basic
Author  : Iryudragon 
Date    : 4/8/2020
*/

#include <stdio.h>  // Include library needed for printf();

int main(int argc,char *argv[]){         // Print "Hello World" in terminal

printf("Hello World %s \n ",argv[1]);

int number=0;
printf("print number %i \n",number);

char string[11]="iryu dragon";
printf("programing by %s\n",string);
return 0;
}
