#include <stdio.h>

int main()
{
    int x, i;
    int a[100];

    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];

    for (i = 1; i < x; i++)
        if (a[i] > max)
            max = a[i];
    }

    printf("%d", max);
    return 0;
}
