#include <stdio.h>
int sum();
int sum(int a, int b)
{
    printf("enter a :");
    scanf("%d", &a);
    printf("enter b :");
    scanf("%d", &b);
    return a + b;
}
void main()
{
    int a, b;
    int addition = sum(a, b);
    printf("enter the sum :%d\n", addition);
}