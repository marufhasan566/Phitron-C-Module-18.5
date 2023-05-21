#include <stdio.h>
void func(long long int *arr, int count, int i, long long int sum)
{
    // Base Case
    if (i == count)
        return;
    sum = sum + arr[i];
    func(arr, count, i + 1, sum);
    if (i == count - 1)
    {
        printf("%lld", sum);
    }
}
int main()
{
    int count;
    scanf("%d", &count);
    long long int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%lld", &arr[i]);
    }
    func(arr, count, 0, 0);

    return 0;
}