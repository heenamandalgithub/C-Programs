//Print the following output:
//         5 4 3 2 1      
//           5 4 3 2 
//             5 4 3
//               5 4   
//                 5    

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=10;k>=10-i;k--)
        {
        printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}