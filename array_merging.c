#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], arr3[10], m, n, i, j, k = 0;
    printf("Enter the size of 1st array : ");
    scanf("%d", &m);
    printf("Enter the elements of 1st array : \n");
    for (i = 0; i < m; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the size of 2nd array : ");
    scanf("%d", &n);
    printf("Enter the elements in 2nd array :\n");
    for (j = 0; j < n; j++)
        scanf("%d", &arr2[j]);
    i = 0, j = 0;
    int q = m + n;
    while ((i < m) && (j < n))
    {
        if (arr1[i] <= arr2[i])
        {
            arr3[k] = arr1[i++];
            k++;
        }
        else
        {
            arr3[k] = arr2[j++];
            k++;
        }
    }
    while (i < m)
    {
        arr3[k] = arr1[i++];
        k++;
    }
    while (j < n)
        ;
    {
        arr3[k] = arr2[j++];
        k++;
    }
    printf("\nAfter merging the two arrays, the elements are : \n");
    for (i = 0; i < q; i++)
        printf("%d\t", arr3[i]);
    return 0;
}