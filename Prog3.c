//Wap to print number is even or odd from 1 to 10 using while
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    i=1;
    while(i<=10)
    {
        if(i%2==0)
        {
            printf("no. %d is even\n",i);
        }
        else
        {
            printf("no. %d is odd\t",i);
        }
        i++;
        }
        getch();
}