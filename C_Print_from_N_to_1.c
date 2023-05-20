#include <stdio.h>
void func(int n)
{
    // Base Case
    if (n == 0)
        return;
    if (n > 1)
    {
        printf("%d ", n);
    }
    if (n == 1)
    {
        printf("%d", n);
    }
    func(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}
