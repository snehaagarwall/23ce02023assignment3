#include<stdio.h>
int main()
{
    int days;
    printf("enter no of days");
    scanf("%d", &days);
    if(days<=5)
    {
        printf("fine is 1 rupees");
    }
    else if(days>=6 && days<=10)
    {
        printf("fine is 2 rupees");
    }
    else if(days>10 && days<=30)
    {
        printf("fine is 5 rupees");
    }
    else
    {
        printf("membership is cancelled");
    }
    return 0;
}