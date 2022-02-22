//Print the following output:
//            A B C D E      
//            A B C D E
//            A B C D E
//            A B C D E   
//            A B C D E   

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=69;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}