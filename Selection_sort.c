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
    for (int i = 0; i < n - 1; i++)
    {
        int indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[indexofmin])
            {
                indexofmin = j;
            }
        }
        int temp = a[i];
        a[i] = a[indexofmin];
        a[indexofmin] = temp;
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