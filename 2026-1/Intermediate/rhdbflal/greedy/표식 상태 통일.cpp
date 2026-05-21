#include <iostream>
#include <algorithm>
using namespace std;

string s;
int one, zero;
int check;

int main(){
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    
    int len = s.length();
    for (int i=1; i<=len; ++i){
        if(s[i-1] != s[i] ){
            if(s[i-1] == '0'){
                cnt0++;
            }
            else {
                cnt1++;
            }
        }
        else {
            continue;
        }
        
    }
    int ans = min(cnt0, cnt1);
    cout << ans;

    return 0;
} 