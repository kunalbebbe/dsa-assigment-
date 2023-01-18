// implement string functions using pointers
#include <iostream>

using namespace std;

int strlen(char *s)
{
    int count = 0;
    for (int i = 0;; i++)
        if (*(s + i) == '\0')
            break;
        else
            count++;

    return count;
}

string substr(char *s, int startIdx, int endIdx)
{
    string str = "";
    for (int i = startIdx; i <= endIdx; i++)
        str += *(s + i);

    return str;
}
int strcmp(char *s1, char *s2)
{
    int i1 = 0, i2 = 0;
    int res = 0;
    for (; s1[i1] != '\0' || s2[i2] != '\0';)
    {
        if (s1[i1] == s2[i2])
        {
            if (s1[i1] != '\0')
                i1++;
            if (s2[i2] != '\0')
                i2++;
        }
        else
        {
            res = s1[i1] - s2[i2];
            return res;
        }
    }
    return 0;
}

int strncmp(char *s1, char *s2, int n)
{
    char *a1 = new (char)(n * sizeof(char));
    char *a2 = new (char)(n * sizeof(char));
    int i = 0;
    while (i < n)
    {
        a1[i] = s1[i];
        a2[i] = s2[i];
        i++;
    }

    return strcmp(a1, a2);
}

int main()
{
    string s = "BA";
    string str = "BAH";
    // cout << strlen(&s[0]);

    // cout << substr(&str[0], 1, 3);
    cout << strncmp(&s[0], &str[0], 3);
    return 0;
}