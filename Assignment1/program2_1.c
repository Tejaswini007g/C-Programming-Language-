#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //updater
    while(iCnt < iNo)
    {
        printf("*\n");
        iCnt++;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}