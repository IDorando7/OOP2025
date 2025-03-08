#include <iostream>

using namespace std;

int main() 
{
    char s[100];
    int i = 0, p = 0, sol = 0;

    FILE* fin;
    if (fopen_s(&fin, "ini.txt", "r")) 
    {
        printf("Eroare deschidere fisier");
        return 0;
    }

    while (fgets(s, 100, fin) != NULL) 
    {
        i = 0;
        p = 0;
        while (s[i] != NULL and s[i] != '\n') 
        {
            p *= 10;
            p += (s[i] - '0');
            i++;
        }
        sol += p;
    }
    printf("%d", sol);
}
