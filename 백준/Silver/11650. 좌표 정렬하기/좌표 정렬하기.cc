#include<iostream>
#include<algorithm>

using namespace std;

struct info{
    int x;
    int y;
};
bool check(info a, info b){
    if(a.x < b.x)
        return true;
    else if (a.x == b.x)
        if (a.y < b.y)
            return true;
    return false;
}

int n;
info arr[100001];

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin >> n;

    for(int i=0;i<n;i++)
        cin >> arr[i].x >> arr[i].y;
    sort(arr, arr+n, check);

    for(int i=0;i<n;i++)
        cout << arr[i].x << ' ' << arr[i].y << '\n';
    
    return 0;
}