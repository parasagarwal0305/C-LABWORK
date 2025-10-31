#include<stdio.h>
int main ()
{
    int i,n;
    int min ,max;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    printf("enter the elements");
    scanf("%d",&a[i]);

     max = a[0];
     min = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i] > max);{
         max = a[i];
    }
    if(a[i] < min){
         min=a[i];
    }

}
}
printf("the max value array is %d", max);
printf("the min value array is %d", min);
return 0;
}
