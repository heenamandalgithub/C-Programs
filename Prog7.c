//Wap to accept no. from user and display reverse using while
#include<stdio.h>
#include<conio.h>
void main()
{
    int rem,rev=0,no;
    printf("Enter the no.:");
    scanf("%d,&no");
    while(no>0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    printf("rev=%d",rev);
    getch();
}