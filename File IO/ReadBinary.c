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
    if((fptr=fopen("binary.bin","rb")) == NULL){
        printf("Cannot open binary.bin file");
        exit(0);
    }

for (num=1;num<5;++num){
    //fread(address_data, size_data, numbers_data, pointer_to_file);
    fread(&num,sizeof(struct ThreeNumber),1,fptr);

    printf("n1: %d\t n2: %d\t n3: %d\n",number.num1,number.num2,number.num3);
}
fclose(fptr);
    return 0;
}