#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,area; 
    printf("enter a,b,c,d,e,f");
    scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f ); //*(a,b)is point 1 (c,d) is pint 2 (e,f)is point 3
    area=a*(d-f)+c*(f-b)+e*(b-d);
    if(area==0)
    printf("all points lie on one straight line");
    else
    printf("all points does not lie on one straight line");
    return 0;
}