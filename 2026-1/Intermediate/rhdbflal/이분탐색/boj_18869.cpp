//멀티버스 II
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;

int m, n, init, res;
map<int, int> mp; //key = 우주 번호 value = 행성 크기
vector<long long> space;
vector <int> num;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    cin >> m >> n;
    res = 0;
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cin >> init;
            mp.insert({i+1, init});
        }
        
        space.clear();
    }


	return 0;
}

