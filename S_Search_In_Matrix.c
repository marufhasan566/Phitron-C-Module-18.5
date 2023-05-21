#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // printf("\n");
    int x;
    scanf("%d", &x);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // printf("%d ", arr[i][j]);
            if (arr[i][j] == x)
            {
                flag++;
            }
        }
        // printf("\n");
    }
    if (flag != 0)
    {
        printf("will not take number\n");
    }
    if (flag == 0)
    {
        printf("will take number\n");
    }

    return 0;
}