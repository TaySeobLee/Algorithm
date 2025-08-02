#include<iostream>
#include<vector>
using namespace std;

class Person {
public:
    int weight, height;
    Person(int w, int h) : weight(w), height(h) {}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<Person> people;
    
    for (int i = 0; i < N; i++) {
        int w, h;
        cin >> w >> h;
        people.push_back(Person(w, h));
    }

    for (int i = 0; i < N; i++) {
        int rank = 1; // 자기 자신보다 덩치 큰 사람 수 + 1이 등수
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            if (people[j].weight > people[i].weight && people[j].height > people[i].height) {
                rank++;
            }
        }
        cout << rank << " ";
    }
}