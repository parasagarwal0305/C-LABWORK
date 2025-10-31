// to accept 8 number from user and find the sum of all the elements of the array
#include<stdio.h>

int main()
{
    int i,sum=0;
int  a[8];

    for(i=0;i<8;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("the sum of all the elements is %d",sum);
return 0;
}