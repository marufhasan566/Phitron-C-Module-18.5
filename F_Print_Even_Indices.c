#include <stdio.h>
void func(int arr[], int n, int i)
{
    // Base Case
    if (i == n)
        return;
    // printf("%d\t", i);
    // printf("\n");
    func(arr, n, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    func(arr, n, 0);
    return 0;
}