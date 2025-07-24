#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int decomposition_sum;
    int result = 0;
    cin >> decomposition_sum;

    for(int i = 1; i < decomposition_sum; i++)
    {
        int sum = 0;
        int num = i;
        while(num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if(sum + i == decomposition_sum)
        {
            result = i;
            break;
        }
    }
    cout << result << "\n";
}