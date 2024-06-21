#include <stdio.h>
int x = 0b1011; // Binary = 2
int y = 0x10;   // hexadecimal = 16
int z = 10;     // Demical = 10

int mait(void)
{
    printf("x in decimal :%d\n" , x);
    printf("x in octal :%o\n", x);
    printf("x in Hexadecimal : %x\n\n", x);

    printf("y in Decimal :%d\n", y);
    printf("y in octal :%o\n", y);
    printf("y in Hexadecimal : %x\n\n", y);

    printf("y in Decimal :%d\n", z);
    printf("y in octal :%o\n", z);
    printf("y in Hexadecimal : %x\n", z);
    }