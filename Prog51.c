//Print the following output:
//            E D C B A
//            E D C B
//            E D C
//            E D
//            E

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=69;j>=i;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}