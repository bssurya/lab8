#include<stdio.h>
#include<string.h>


int main(void)

{
    int x,y,z;
    

    printf("Enter X Y Z :");
    scanf("%d%d%d",&x,&y,&z);

    int *a;
    int *b;
    int *c;
    
    a=&y;
    b=&z;
    c=&x;


    printf("Revised X Y Z are %d %d %d",*a,*b,*c);

return 0;
}