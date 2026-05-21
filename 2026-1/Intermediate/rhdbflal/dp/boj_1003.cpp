//피보나치 함수
#include <iostream>
using namespace std;

int f0[41], f1[41];
int ts, n;

void fibo(int n){

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> ts;

    f0[0] = 1;
    f0[1] = 0;

    f1[0] = 0;
    f1[1] = 1;

    for(int i = 2; i <=40; ++i){
        f0[i] = f0[i-1] + f0[i-2];
        f1[i] = f1[i-1] + f1[i-2];
    }
    for(int i = 0; i < ts; ++i){
        cin >> n;

        cout << f0[n] << " " << f1[n] << "\n";
        
    }
    return 0;
}
