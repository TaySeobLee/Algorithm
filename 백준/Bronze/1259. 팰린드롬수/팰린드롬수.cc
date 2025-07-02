#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    while (true)
    {
        cin >> str;
        if(str == "0") break;
        
        string reverse_str = str;
        reverse(reverse_str.begin(),reverse_str.end());
        if(str == reverse_str)
        {
            cout << "yes" <<"\n"; 
        }
        else
        {
            cout << "no" << "\n";
        }

    }
    
}