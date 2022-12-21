#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    // Input of array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Input ends here
    // Sorting
    // we did n-i-1 because we each iteration bigger elements are being placed
    // at the ends so no need to iterate over there
    // and in outer loop n-1 because last iteration not needed as last remaining
    // element will get auto placed at correct position.
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int temp = a[j];
            if (a[j] > a[j + 1])
            {
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //
    // Printing of array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    //
}