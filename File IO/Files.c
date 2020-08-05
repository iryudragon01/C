/* 
writing file
w for write
a for append
r for read
*/
#include <stdio.h>
#include <stdlib.h>
void main(){
    // Write text to file
    FILE * fpointer= fopen("employee.txt","w");
    fprintf(fpointer," iryu dragon\n hello");
    fprintf(fpointer," iryu dragon2\n hello2");

    fclose(fpointer);

    //Read text frome file
    FILE *  fread = fopen("employee.txt","r");
    char line[255];
    fgets(line,255,fread);
    printf("%s",line);
}