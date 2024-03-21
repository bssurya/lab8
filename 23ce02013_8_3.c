#include<stdio.h>


int main()

{
    int arr[1000];
    int length=0;

    printf("Enter array length:");
    scanf("%d",&length);

    printf("Enter array:");
    for(int i=0;i<length;i++) scanf("%d",&arr[i]);

     int *p;

     p= arr;

     for (int i=length-1;i>=0;i--)
       printf("%d\t",p[i]);


       return 0;





}