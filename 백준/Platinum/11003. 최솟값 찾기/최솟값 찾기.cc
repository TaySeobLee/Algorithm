#include<iostream>
#include<deque>

using namespace std;

typedef pair<int, int> Node;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,L;
    cin >> N >> L;

    deque<Node> mydeque;

    for(int i =0; i < N;i++)
    {
        int now;
        cin >> now;
        //값이 들어올 때마다 정렬 X / 현재 수 보다 큰 값을 덱에서 제거
        while(mydeque.size()&& mydeque.back().first > now)
        {
            mydeque.pop_back();
        }
        mydeque.push_back(Node(now,i));
        //범위에서 벗어난 값은 덱에서 제거
        if(mydeque.front().second <= i -L)
            mydeque.pop_front();
        cout << mydeque.front().first << ' ';
        
    }
}