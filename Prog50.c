//Print the following output:
//            a a a a a
//            b b b b
//            c c c
//            d d
//            e 

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=97;i<=101;i++)
    {
        for(j=101;j>=i;j--)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    getch();
}