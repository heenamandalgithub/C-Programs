//Print the following output:
//            A
//            B B
//            C C C
//            D D D D
//            E E E E E

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    getch();
}