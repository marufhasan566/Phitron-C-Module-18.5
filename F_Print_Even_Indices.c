#include <stdio.h>
void func(int arr[],int n, int i)
{
    // Base Case
    if (i == n + 1)
        return;
    printf("%d ", i);
    func(arr[],int n, int i);
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