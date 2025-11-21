#include<stdio.h>

int i = 0;
int j = 0;
void Pattern(int iRow, int iCol)
{
    for (i = 1; i <= iRow; i++)
    {
        for (j = iCol; j >= 1;j--)
        {
           printf("%d\t",j);
        }
        printf("\n");
        
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}