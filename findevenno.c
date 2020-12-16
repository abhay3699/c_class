#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i;
    printf("enter a number from 20 to 30 = ");
    scanf("%d",&a);
    printf("\nall even number will be");
    for(i=0;i<=a;i++)
    {   
     if(i%2 == 0)
       {
           
           printf("\n%d\n ", i);  
        }  
    }
    return 0;
}
