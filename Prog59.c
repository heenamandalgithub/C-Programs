//Print the following output:
//            a b c d e
//              a b c d
//                a b c
//                  a b
//                    a

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=101;i>=97;i--)
    {
        for(k=97;k<=200-i;k++)
        {
            printf(" ");
        }
        for(j=97;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}