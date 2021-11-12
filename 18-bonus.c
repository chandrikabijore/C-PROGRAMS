#include<stdio.h>
void main()
{
    int yearOfJoining,currentYear,jobYear;
    printf("year of joining :");
    scanf("%d",&yearOfJoining);
    printf("current year :");
    scanf("%d",&currentYear);
    jobYear=yearOfJoining-currentYear;
    if(jobYear>5 && jobYear<10){
        printf("5000 bonus");
    }
    else if(jobYear<10){
    printf("10000 bonus");
    }
    else;{
      printf("2000 bonus");
    }
}