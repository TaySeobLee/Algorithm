#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    int pos;
    for(int i = 0; i < 13; i++) {
        if(str[i] == '*') {
            pos = i;
            break;
        }
    }

    for(int d = 0; d <= 9; d++) {
        int sum = 0;
        for(int i = 0; i < 13; i++) {
            int val;
            if(i == pos) val = d;
            else val = str[i] - '0';

            sum += (i % 2 == 0) ? val : val * 3;
        }
        if(sum % 10 == 0) {
            cout << d << "\n";
            break;
        }
    }
}
