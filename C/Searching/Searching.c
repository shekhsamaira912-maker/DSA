#include<stdio.h>
void main()
{
    int a[10],i,n,search,flag=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found at position %d",i+1);
    }
    else
    {
        printf("Element not found");
    }
}