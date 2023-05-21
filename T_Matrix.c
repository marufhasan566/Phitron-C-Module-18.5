#include <stdio.h>
// #include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // printf("\n");
    int primarySum = 0;
    int secondarySum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("%d ", arr[i][j]);
            if (i == j)
            {
                primarySum = primarySum + arr[i][j];
            }
            if (i + j == n - 1)
            {
                secondarySum = secondarySum + arr[i][j];
            }
        }
        // printf("\n");
    }
    // printf("%d %d", primarySum, secondarySum);
    int difference = primarySum - secondarySum;
    if (difference > 1)
    {
        printf("%d", difference);
    }
    if (difference < 1)
    {
        printf("%d", (-1) * difference);
    }
    // printf("%d", abs(difference));
    return 0;
}