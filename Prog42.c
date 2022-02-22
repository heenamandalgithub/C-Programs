//Print the following output:
//            a b c d e      
//            a b c d e
//            a b c d e
//            a b c d e  
//            a b c d e   

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=97;i<=101;i++)
    {
        for(j=97;j<=101;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}