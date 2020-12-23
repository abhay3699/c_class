#include<stdio.h>
#include<conio.h>


int main(int argc, char const *argv[])
{
    int num;
    char alp,name[10];
    printf("enter a number - ");
    scanf("%d",&num);
    printf("\nyour number is = %d",num);
    printf("\nEnter a string - ");
    fflush(stdin);
    gets(name);
    printf("\nYour string is = ");
    puts(name);
    printf("\nEnter single character - ");
    alp=getch();
    printf("\nYour character is = ");
    putch(alp);
    printf("\nEnter single character - ");
    alp=getche();
    printf("\nYour character is = ");
    putch(alp);    
    printf("\nEnter your name - ");
    scanf("%s",name);
    printf("\nYour name is = %s",name);
    return 0;
}
