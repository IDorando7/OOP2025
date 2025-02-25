#include <bits/stdc++.h>

using namespace std;

#define MAX_CUVINTE 100
#define MAX_LUNGIME 100

bool cmp(char o[100], char p[100])
{
    return strlen(o) > strlen(p);
}

int main() 
{
    int n, j, ok;
    char cuvinte[MAX_CUVINTE][MAX_LUNGIME];
    char sir[MAX_LUNGIME];
    int a[MAX_CUVINTE], b[MAX_CUVINTE];

    n = 0;
    while (scanf_s("%s", sir, (unsigned int)sizeof(sir)) == 1)
    {
        strcpy_s(cuvinte[n], sir);
        a[n] = strlen(cuvinte[n]);
        b[n] = n;
        n++;
    }

    /// bubble sort 
    ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for (int i = 0; i < n - 1; i++)
            if (a[i] < a[i + 1])
            {
                swap(a[i], a[i + 1]);
                swap(b[i], b[i + 1]);
                ok = 0;
            }
    }
    for (int i = 0; i < n; i++)
        printf("%s\n", cuvinte[b[i]]);

    return 0;
}
