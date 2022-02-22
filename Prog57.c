//Print the following output:
//            E E E E E
//            D D D D
//            C C C
//            B B
//            A 

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=69;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    getch();
}