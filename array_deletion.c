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
    printf("\nenter postion where element is to be deleted:");
    scanf("%d",&pos);
    if(pos>=n+1){
    printf("\ndeletion not possible");
    }
   else{
    for(i=pos;i<n-1;i++)
    arr[i]=arr[i+1];
    n=n-1;}
    printf("the element are\n");
    for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
   }
    return 0;
}
