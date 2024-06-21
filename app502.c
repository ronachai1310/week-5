//ข้อมูลอักขระ
#include <stdio.h>
#include <stdbool.h>
int x = 65; //Decimal =10
int y = 33;  // Decimal =10

bool isMarry = true;
bool isMale = false;

int main()
{
    printf("x in Decimal : %d\n", x);
    printf("x in Octal :%o\n", x);
    printf("x in Hexadecimal : %x\n", x);
    printf("x in Character : %x\n", x);
    printf("isMarry in Bool : %d\n\n", isMarry);

    printf("y in Decimal : %d\n", y);
    printf("y in Octal :%o\n", y);
    printf("y in Hexadecimal : %x\n", y);
    printf("y in Character : %x\n", y);
    printf("isMale in Bool : %d\n\n", isMale);
}