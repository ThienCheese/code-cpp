#include <bits/stdc++.h>
using namespace std;

int main () {
    int a[100],b[100],c[100];
    int m,n;
    cin >> m;
    for(int i = 0; i < m; i++) 
    {
        cin >> a[i];
    }
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> b[i];
    }
    for (int k = 0; k < m+n; k++)
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                if(a[j] < b[i]) 
                {
                    c[k] = a[j];
                }
                if (a[j] = b[i]) 
                {
                    
                }
            }
        }
    }
    return 0;
}
