#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}
int myStrcmp(char s1[], char s2[])
{
    
    return 1;
}
void StringReverse(char st[])
{
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
            for (; dem < int(i - d) / 2; dem++)
            {
                char temp;
                temp = st[i - dem ];
                st[i - dem ] = st[j + dem];
                st[j + dem] = temp;
            }
        }
    }
}
