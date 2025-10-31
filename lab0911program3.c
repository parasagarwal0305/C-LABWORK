// to copy element of one array to another array
#include<stdio.h>
int main()
{
    int n ,i;
    printf("enter the size of array");
scanf("%d",&n);
    int a1[n],a2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);

    }
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
        }
        for(i=0;i<n;i++)
        {
        
             printf("the elements in duplicate array is  %d",a2[i]);
        }
    return 0;
 
} 