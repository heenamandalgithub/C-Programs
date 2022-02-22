//Print the following output:
//            e
//            d d
//            c c c
//            b b b b
//            a a a a a

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=101;i>=97;i--)
    {
        for(j=101;j>=i;j--)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    getch();
}