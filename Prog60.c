//Print the following output:
//            A B C D E
//              A B C D
//                A B C
//                  A B
//                    A

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=69;i>=65;i--)
    {
        for(k=65;k<=150-i;k++)
        {
            printf(" ");
        }
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}