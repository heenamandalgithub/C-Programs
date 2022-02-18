//Print the following output:
//           5 5 5 5 5      
//             4 4 4 4 
//               3 3 3
//                 2 2   
//                   1    

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(k=1;k<=10-i;k++)
        {
        printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
}