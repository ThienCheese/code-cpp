#include <iostream>
#include <string.h>
using namespace std;
void xoadau(string &chuoi)
{
    int i = 0;
    while (chuoi[0] == ' ')
    {
        for (int i = 0; i < chuoi.size(); ++i)
            chuoi[i] = chuoi[i + 1];
    }
    chuoi[chuoi.size()-1] = NULL;
}
void xoa(string &s, int k)
{
    int n = s.size();
    for (int i = k; i < n - 1; i++)
    {
        s[i] = s[i + 1];
    }
    s[n - 1] = '\0';
}
void them(string &s, int k)
{
    int n = s.size();
    for (int i = n - 1; i >= k; i--)
    {
        s[i] = s[i - 1];
    }
    s[k] = ' ';
}
int main()
{
    string s;
    int k;
    getline(cin, s);
    cout << s << '\n';
    xoadau(s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            if (s[i - 1] == ' ')
            {
                while (s[i - 1] == ' ')
                {
                    xoa(s, i - 1);
                    i--;
                }
            }
            if ((s[i + 1] == ' ') && s[i+2] == ' ')
            {
                while (s[i+2] == ' ') 
                {
                    xoa(s, i + 2);
                    i--;
                }
                
            }
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            if (s[i + 1] != ' ')
            {
                them(s, i + 1);
            }
        }
    }
    cout << s << "a";
    return 0;
}
