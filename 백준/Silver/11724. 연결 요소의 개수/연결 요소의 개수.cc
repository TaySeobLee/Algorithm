#include<iostream>
#include<vector>
using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
void DFS(int v);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    A.resize(N+1);
    visited = vector<bool>(N+1, false);

    for(int i = 0; i < M; i++)
    {
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }

    int count = 0;

    for(int i = 1; i < N+1; i++)
    {
        if(!visited[i])
        {
            //방문하지 않은 노드가 없을때까지
            count++;
            DFS(i);
        }
    }
    cout << count <<"\n";
}

void DFS(int v)
{
    if(visited[v])
    {
        return;
    }

    visited[v] = true;

    for(int i: A[v])
    {
        if(visited[i] == false)
        {
            //연결 노드 중 방문하지 않은 노드만 탐색
            DFS(i);
        }
    }
}