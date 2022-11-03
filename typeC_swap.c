#include <stdio.h>

//#define SWAP(x, y) (typeof(x) x ^= y ^= x ^= y)
#define SWAP(x, y)  { typeof(x) SWAP = x; x = y; y = SWAP; } 

void main()
{
    float x,y;

    printf("Enter any two number to swap: ");
    scanf("%f%f", &x, &y);

    printf("Values before swapping\n");
    printf("num1 = %f, num2 = %f\n\n", x, y);

    SWAP(x, y);

    printf("Values after swapping\n");
    printf("num1 = %f, num2 = %f\n", x, y);


}
