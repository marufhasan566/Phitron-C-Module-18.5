#include <stdio.h>
void func(int i, int n)
{
    // Base Case
    if (i == n + 1)
        return;
    func(i + 1, n);
    printf("%d ", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    func(1, n);
    return 0;
}