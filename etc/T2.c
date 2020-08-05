/*
Title       : Loop and Logic
Purpose     : Loop and logic in C
Author      : Iryudragon
Date        :4/8/2020
*/
#include <stdio.h>

int main(int argc,char argv[])
{
    int age=19;
    printf("%i\n",age);
    /*
        if age over 18, you can gamble
        if age over 16, you can drive
        Otherwise ,Nothing
    */
    if(age>=18)
    {
        printf("You can gamble\n");
    }
    
    if(age>=16)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You 're too young to gamble nor drive\n");
    }
    
// For Loop

    for(int i=1;i<11;i++)
    {
        // print 1 to 10
        printf("For Loop i=%i\n",i);
    }
// While Loop
    int i=0;
    while (i<10)
    {
        /* print 1 to 10 with while loop*/
        printf("While Loop i=%i\n",i+1);

        if(i==5)
            break;
            
        i++;
    }
    
    return 0;
}