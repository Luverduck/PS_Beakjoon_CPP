#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    long a, b, c;

    scanf("%ld %ld %ld", &a, &b, &c);

    printf("%ld", a + b + c);

    return 0;
};