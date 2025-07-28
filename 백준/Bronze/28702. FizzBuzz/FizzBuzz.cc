#include <iostream>
#include <string> 
using namespace std;

void PrintFizzBuzz(int obj)
{
	if (obj % 3 == 0 && obj % 5 == 0) 
		cout << "FizzBuzz";
	else if (obj % 3 == 0) 
		cout << "Fizz";
	else if (obj % 5 == 0)
		cout << "Buzz";
	else
		cout << obj;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	string str[3];

	
	for (int i = 0; i < 3; i++)
		cin >> str[i];
	
	for (int i = 0; i < 3; i++)
	{
		if (str[i] != "FizzBuzz" && str[i] != "Fizz" && str[i] != "Buzz") // 숫자인 경우
		{
			PrintFizzBuzz(stoi(str[i]) + (3 - i));
			break; 
		}
	}
		
	return 0;
}