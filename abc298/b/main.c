#include <stdio.h>

int main(void)
{
    int N;

    int A[10000];
    int B[10000];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i * N + j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &B[i * N + j]);
        }
    }

    int f1 = 1;
    int f2 = 1;
    int f3 = 1;
    int f4 = 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i * N + j] && !B[i * N + j]) f1 = 0;
            if (A[(N - j - 1) * N + i] && !B[i * N + j]) f2 = 0;
            if (A[(N - i - 1) * N + (N - j - 1)] && !B[i * N + j]) f3 = 0;
            if (A[j * N + (N - i - 1)] && !B[i * N + j]) f4 = 0;
        }
    }

    printf("%s\n", f1 || f2 || f3 || f4? "Yes": "No");

    return 0;
}
