#include<stdio.h>

void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("%d  is positive",num);
    }
    else if (num < 0)
    {
       printf("%d  is negative",num);
    }
    else
    {
        printf("%d  is Zero",num);
    }

    
}

int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}