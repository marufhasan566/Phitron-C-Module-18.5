#include <stdio.h>
void func(int i, int n)
{
    // Base Case
    if (i == n + 1)
        return;
    printf("%d\n", i);
    func(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    func(1, n);
    return 0;
}