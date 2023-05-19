#include <stdio.h>
void func(int i, int n)
{
    // Base Case
    if (i == n)
        return;
    printf("I love Recursion\n");
    func(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    func(0, n);
    return 0;
}