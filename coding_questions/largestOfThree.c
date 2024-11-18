// To execute ./a.out 5 20 10; echo$?

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("usage: %s <num1> <num2> <num3>\n", argv[0]);
        exit(-1);
    }

    long num1, num2, largest;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    largest = atoi(argv[3]);


    if(num1 > largest)
        largest = num1;
    
    if(num2 > largest)
        largest = num2;

    // printf("largest: %ld", largest);
    return largest;
}