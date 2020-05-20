// faruk@VivoBook-S15-X510UF:~/Documents/C_programming$ gcc c_struct.c -o StructProgram
// faruk@VivoBook-S15-X510UF:~/Documents/C_programming$ ./StructProgram 

#include<stdio.h>

struct address {
    char name[50];
    char street[100];
    char city[50];
    char state[20];
    int pin;
};

// struct Point
// {
//     int x, y;
// }p1;

struct Point 
{
    int x, y;
};

int main()
{
    // struct Point p1 = {0, 1};
    // printf("x=%d, y=%d\n", p1.x, p1.y);
    // p1.y = 505;
    // printf("x=%d, y=%d\n", p1.x, p1.y);

    struct Point p2 = { .y =10};
    printf("y=%d\n", p2.y);
    printf("x=%d\n", p2.x);

    struct Point *p3 = &p2;
    printf("%d\n", p3->y);

    return 0;
}