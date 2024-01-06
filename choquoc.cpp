#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[] = "aaAAbbBB";
    for (int i = 0; i < strlen(s); i++)
        cout << (int)s[i] << " ";
    return 0;
}