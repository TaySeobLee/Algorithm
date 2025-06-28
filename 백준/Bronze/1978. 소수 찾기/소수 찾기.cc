#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int temp = 0;
    int count = 0;
    int result = 0;
    for(int i = 0; i < N ; i++)
    {
        cin >> temp;
        //소수 조건으로 소수만 걸러내서 count++해야함
        for(int j = 1; j <= temp; j++)
        {
            if(temp % j == 0)
            {
                count++;
            }
        }
        if (count == 2)	//temp가 소수
			    result++;
		    count = 0;
    }
    cout << result <<"\n";
}