//Print the following output:
//            E
//            E D
//            E D C
//            E D C B
//            E D C B A

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=69;i>=65;i--)
    {
        for(j=69;j>=i;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}