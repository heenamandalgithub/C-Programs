//Print the following output:
//            a
//            a b
//            a b c
//            a b c d
//            a b c d e

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=97;i<=101;i++)
    {
        for(j=97;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}