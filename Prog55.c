//Print the following output:
//            e
//            e d
//            e d c
//            e d c b
//            e d c b a

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=101;i>=97;i--)
    {
        for(j=101;j>=i;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}