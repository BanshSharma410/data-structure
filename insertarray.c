/*Q. C program for inserting an element at a specific position in an array?
#include<stdio.h>
void main()
{
    int i,n,pos,arr[100];
    /*
    i is for looping variable
    n is for storing the maximum number of elements of array
    pos is for position where you want to insert element
    */
    printf("Enter the number of elements you want to enter : ");
    scanf("%d",&n);
    printf("Enter elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the position where you want to add element : ");
    scanf("%d",&pos);
    n++;
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    printf("Enter the element : ");
    scanf("%d",&arr[pos-1]);
    printf("Elements of array are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
