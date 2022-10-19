#include<stdio.h>

int main()
{
    int arr[10];
    int n,i,item,pos;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("\nenter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nthe element are\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\nenter postion where element is to be inserted:");
    scanf("%d",&pos);
    pos--;
    printf("\n enter the itemn to be inserted:");
    scanf("%d",&item);
    for(i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=item;
    n=n+1;
    printf("the element are\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
