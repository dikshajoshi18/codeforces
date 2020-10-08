#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
     
    reverse(t.begin(),t.end());
    if (s == t)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
        return 0;
    }

    return 0;
}