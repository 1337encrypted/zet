#include<stdio.h>
#include<stdlib.h>
// pos=It is the position at which we want to set the bit

void set(int n, int pos)
{
	n |= (1 << pos);
    printf("%d\n", n);
}

void unset(int n, int pos) {
    n &= (~(1 << pos));
}

int main(int argc, char *argv[]){

    int n;
    int pos;

    if(argc != 3)
    {
        printf("Usage: %s <num> <pos>\n", argv[0]);
        exit(-1);
    }

    n = atoi(argv[1]);
    pos = atoi(argv[2]);
    
    set(n, pos);
    
    unset(n, pos);
    printf("%d\n", n);

    return 0;
}