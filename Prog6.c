//Wap a program to accept no. from user and display sum of digit using while
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("The sum of digits is %d",sum);
    getch();
}