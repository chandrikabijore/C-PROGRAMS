#include <stdio.h>
void main()
{
    int a, b, option;
    printf("enter the first no. :");
    scanf("%d", &a);
    printf("enter the second no. :");
    scanf("%d", &b);
    printf("choose your options\n");
    scanf("%d", &option);
    if (option == 1)
    {
        printf("1 for addtion\n", a + b);
    }
    else if (option == 2)
    {
        printf("2 for substraction\n", a - b);
    }
    else if (option == 3)
    {
        printf("3 for multiplication\n", a * b);
    }
    else if (option == 4)
    {
        printf("4 for division\n", a / b);
    }
    else
    {
        printf("wrong choose");
    }
}
