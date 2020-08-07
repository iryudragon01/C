/* 
writing file
w for write
a for append
r for read
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    // Write text to file
    FILE * fpointer= fopen("employee.txt","w");
    fprintf(fpointer," iryu dragon hello\n");
    fprintf(fpointer," iryu dragon2 hello2\n");

    fclose(fpointer);

    //Read text frome file
    FILE *  fread = fopen("employee.txt","r");
    char line[255];
    while (fgets(line,255,fread) != NULL)         // fgets อ่านข้าความหนึ่งบ้นทัดแล้ว เลื่อน แอดเดรส ไปบรรถัดถัดไป
    {
        printf("%s", line);
    }
    fclose(fread);
    // อ่าน textfile ที่เป็นตัวเลข
    FILE * fnumber ;
    if( fopen("number.txt","r") == NULL){       // check ว่าไฟล์เปิดได้
        printf("Cannot open number.txt file\n");
        exit(0);
    }
    fnumber=fopen("number.txt","r") ;
    int number;
    while (fscanf(fnumber,"%d",&number) != EOF)
    {
       printf("%d\n",number);
    }
    
    
    fclose(fnumber);
    return 0;
}