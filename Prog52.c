//Print the following output:
//            e d c b a
//            e d c b
//            e d c
//            e d
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
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}