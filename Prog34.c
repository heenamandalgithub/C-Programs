//Print the following output:
//         1 1 1 1 1      
//           2 2 2 2 
//             3 3 3
//               4 4   
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
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
}