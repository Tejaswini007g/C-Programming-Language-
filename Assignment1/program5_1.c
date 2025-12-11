#include<stdio.h>

void CheckEvenOdd(int num)
{
        if (num %2 == 0)
        {
          printf("%d is Even",num);
        }
        else
        {
            printf("%d is Odd",num);
        }
        
}

int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}