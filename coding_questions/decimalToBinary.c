#include<stdio.h>
#include<stdlib.h>

void decimalToBinary(int n){
    uint8_t remainder=0;

    printf("0");
    while(n){
        remainder = n%2;
     
        if(remainder)
            printf("1");
        else
            printf("0");    
        n/=2;
    }
    printf("\n");
}

int main(int argc, char *argv[]){
    if(argc != 2)
    {
        printf("Usage: %s <num>\n", argv[0]);
        exit(-1);
    }
    decimalToBinary(atoi(argv[1]));
    return 0;
}