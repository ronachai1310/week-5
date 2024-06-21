#include <stdio.h>
const int textrate = 7;
float itemcost, salestax, total;

int main(){
    printf("Please Enter cost of item : ");
    scanf("%f", &itemcost);
    salestax = (textrate * itemcost)/100;
    total = salestax + itemcost;
    printf("Item cost is= %.2f\n", itemcost);
    printf("sales tax is= %.2f\n", salestax);
    printf("Toyal net is= %.2f\n", total);
    return (0);
}