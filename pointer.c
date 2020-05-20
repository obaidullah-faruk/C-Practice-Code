#include<stdio.h>

int var = 1;
int *ptr;

int main(void) {
    
    ptr = &var;
    print("Indirect Access: %d\n", *ptr);
    /* Change the content of var through pointer */
    *prt = 48;
    print("Indirect Access: %d\n", *ptr);
    return 0;
}