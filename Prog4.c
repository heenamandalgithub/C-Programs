//Wap for multiple student data entry using while
#include<stdio.h>
#include<conio.h>
void main()
{
    int rollno,id,i=1,j;
    char name[20],add[20];
    printf("Enter how many students=\n");
    scanf("%d",&j);
    while(i<=j)
    {
        printf("Enter student roll no=\n");
        scanf("%d",&rollno);
        printf("Enter students name=\n");
        scanf("%s",&name);
        scanf("Enter student add=\n");
        scanf("%s",add);
        printf("Enter student i\n");
        scanf("%d",&id);
        printf("\n Rollno=%d\n",rollno);
        printf("Student name=%s\n",name);
        printf("Student address=%s\n",add);
        printf("\n Student id no=%d\n",id);
        i++;
    }
    getch();
    }
