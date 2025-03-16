#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

void sortcuv(char x[])
{
    int cnt = 0;
    char v[101][101];
    char* p;
    p = strtok(x, " ");
    while (p)
    {
        strcpy(v[++cnt], p);
        p = strtok(NULL, " ");
    }
    for (int i = 1; i < cnt; i++)
        for (int j = i + 1; j <= cnt; j++)
        {
            if (strlen(v[i]) < strlen(v[j]))
            {
                char aux[101];
                strcpy(aux, v[i]);
                strcpy(v[i], v[j]);
                strcpy(v[j], aux);
            }
            if (strlen(v[i]) == strlen(v[j]))
            {
                if (strcmp(v[i], v[j]) > 0)
                {
                    char aux[101];
                    strcpy(aux, v[i]);
                    strcpy(v[i], v[j]);
                    strcpy(v[j], aux);
                }
            }
        }

    for (int i = 1; i <= cnt; i++)
        cout << v[i] << endl;
}

int main()
{
    char prop[100];
    scanf("%[^\n]", prop);
    sortcuv(prop);

    return 0;
}
