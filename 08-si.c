#include<stdio.h>
void main()
{
    float mrp, discount;
    float discountAmount;
    
    
    discountAmount =  (mrp * discount) / 100;

    printf("product price is   %.2f\n",discount);
    printf("discount Amount    %.2f\n",discountAmount);
    printf("final amount   %.2f",mrp - discountAmount);
}
