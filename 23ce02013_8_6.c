#include<stdio.h>
#include<string.h>


int main(void)

{
    char x[1000],y[1000];
   
    printf("Enter the string:");
    gets(x);

    
    printf("Enter the string:");
    gets(y);

    strcat(x,y);

    puts(x);

    return 0;
}










