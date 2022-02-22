//Print the following output:
//            e e e e e
//            d d d d
//            c c c
//            b b
//            a

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=101;i>=97;i--)
    {
        for(j=97;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    getch();
}