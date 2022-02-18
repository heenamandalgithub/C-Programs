//Print the following output:
//       1 2  3  4  
//       2 4  6  8 
//       3 6  9  12     
//       4 8  14 16    
//       5 10 15 20

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d\t",i*j," ");
        }
        printf("\n");
    }
    getch();
}