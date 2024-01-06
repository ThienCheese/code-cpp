#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    int d = 0;
    for (int i = 0; i < st.size(); i++)
    {

        if (st[i] == ' ') 
        {
            int j = d;
            int dem = 0;
            for (; dem < int(i - d) / 2; dem++)
            {
                char temp;
                temp = st[i - dem - 1];
                st[i - dem - 1] = st[j + dem];
                st[j + dem] = temp;
            }
            d = i + 1;
        }
        if (i == st.size() - 1 ) 
        {
            int j = d;
            int dem = 0;
            for (; dem < (int ((i - d) / 2)) + 1 ; dem++)
            {
                char temp;
                temp = st[i - dem ];
                st[i - dem ] = st[j + dem];
                st[j + dem] = temp;
            }
        }
    }
    for (int i = 0; i < st.size(); i++)
    {
        cout << st[i];
    }
    return 0;
}