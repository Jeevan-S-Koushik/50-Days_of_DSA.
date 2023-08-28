#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
                cout << str[i] << " repeated :" << count << endl;
                break;
            }
        }
        count = 0;
    }
    return 0;
}