//Print the following output:
//            E 
//            D D
//            C C C
//            B B B B
//            A A A A A

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=69;i>=65;i--)
    {
        for(j=69;j>=i;j--)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    getch();
}