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
}
void xoacuoi(string &chuoi)
{
    int n = chuoi.size();
    
}
int main()
{
    string s;
    getline(cin, s);
    xoadau(s);
    xoacuoi(s);
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] -= 32;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            if (s[i + 1] == ' ')
            {
                while (s[i + 1] == ' ')
                {
                    for (int j = i+1; j < s.size(); j++)
                    {
                        s[j] = s[j + 1];
                    }
                }
            }
            s[i + 1] = toupper(s[i + 1]);
            i++;
        }
        else if (s[i] >= 'A' && s[0] <= 'Z')
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    cout << "a";
    return 0;
}