/*
อ่านเขียน binary file
*/
#include <stdio.h>
#include <stdlib.h>

struct ThreeNumber      // WriteBinary
{
    int num1,num2,num3;
};


int main(){
    int num;
    struct ThreeNumber number;
    FILE *fptr;
    if((fptr=fopen("binary.bin","wb")) == NULL){
        printf("Cannot open binary.bin file");
        exit(0);
    }

for (num=1;num<5;++num){
    number.num1=num;
    number.num2=2*num;
    number.num3=2*num+3;
    //fwite(address_data, size_data, numbers_data, pointer_to_file);
    fwrite(&num,sizeof(struct ThreeNumber),1,fptr);
}
fclose(fptr);
    return 0;
}