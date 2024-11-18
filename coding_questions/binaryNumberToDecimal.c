#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

long binaryToDecimal(char *num){
    long binaryNumber = atol(num);
    long decimalNumber = 0;
    int  i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber+1;
}

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Usage: %s <num>\n", argv[0]);
        exit(-1);
    }
    printf("%ld\n", binaryToDecimal(argv[1]));
    return 0;
}