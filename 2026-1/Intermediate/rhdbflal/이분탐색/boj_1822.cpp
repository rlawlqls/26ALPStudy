//차집합
#include <iostream>
#include <vector>
#include <set>
#define ll long lnog

using namespace std;

int nA, nB, init;
set <int> setA;
set <int> check;
set <int> setB;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    cin >> nA >> nB;
    for(int i = 0; i < nA; ++i){
        cin >> init;
        setA.insert(init);
    }
    for(int i = 0; i < nB; ++i){
        cin >> init;
        setB.insert(init);
    }
  
    int cnt = 0;
    int idx = 0;
    for(int x : setA){
        if(setB.find(x) == setB.end()){
            check.insert(x);
            cnt++;
        }
        idx++;
        
    }
    if(cnt == 0) {
        cout << cnt;
    }
    else {
        cout << cnt << "\n";
        for (int x : check){
            cout << x << " ";
        }
    }

	return 0;
}

