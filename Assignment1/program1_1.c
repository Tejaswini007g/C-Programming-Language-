#include<stdio.h>

void Pattern(int iNo)
{
    char iCnt = '\0';
    for (iCnt = 'A'; iCnt < 'A'+iNo ; iCnt++)
    {
       printf("%c\t",iCnt);
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

//Time Complexity = O(n)
