#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, cnt, si, ti;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    vector<pair<int,int>> v;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i=0;i<n;++i){
        cin >> si >> ti;
        v.push_back({si, ti});
    }
    sort(v.begin(), v.end());
    pq.push(v[0].second);
    for(int i=1; i<n;++i){
        if(pq.top() <= v[i].first ){
            pq.pop();
        }
        pq.push(v[i].second);

    }
    cout << pq.size();
    return 0;
    
}