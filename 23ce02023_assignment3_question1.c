#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    if(num>0)
    {
    printf("\n %d is positive", num);
    }
    else if (num<0)
    {
    printf("\n %d is negative", num);
    }
    else
    {
        printf("%d is 0", num);
    }
    return 0;
    
}