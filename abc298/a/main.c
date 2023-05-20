#include <stdio.h>

int main(void)
{
    int N;
    char S[100];

    scanf("%d", &N);
    scanf("%s", S);

    int o = 0;
    int x = 0;

    for (int i = 0; i < N; i++)
    {
        o += S[i] == 'o';
        x += S[i] == 'x';
    }

    printf("%s\n", o != 0 && x == 0? "Yes": "No");

    return 0;
}
