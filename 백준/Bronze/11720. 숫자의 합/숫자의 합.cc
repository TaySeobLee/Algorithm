#include <iostream>
using namespace std;

int main()
{
    int number_N = 0;
    string numbers;
    int sum = 0;
    
    cin >> number_N;
    cin >> numbers; //문자열로 받음
    
    for(int i = 0; i < numbers.length(); i++)
    {
        //sum에 배열의 각 자리의 값을 정수화
        sum += numbers[i] - '0';
    }
    cout << sum << endl;
    return 0;
}