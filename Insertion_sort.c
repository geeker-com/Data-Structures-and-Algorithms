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
    // a[j+1] = curr this thing is giving for ex when j=0 and j-- happens then
    // this thing assigns a[0] = curr element which was req.
    for (int i = 1; i < n; i++)
    {
        int curr = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > curr)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = curr;
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