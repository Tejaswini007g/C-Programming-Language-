#include<stdio.h>

void CheckLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 !=0 ) || (year % 400 == 0))
    {
        printf("Leap year\n");
    }
    else
    {
        printf("not Leap year\n");
    }
    
}

int main()
{
    int yr;

    printf("Enter Year :\n");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}