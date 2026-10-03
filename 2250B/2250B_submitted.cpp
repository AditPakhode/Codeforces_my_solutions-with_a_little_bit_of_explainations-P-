#include <bits/stdc++.h>

using namespace std;
void work(){
    int n,k;
    cin >> n >> k;
    if(k == n-1){
        cout << -1 << '\n';
        return;
    }
    int r=n-k;
    int c0=(n+1)/2, c1=n/2;
    
    for(int i=0;i<r;++i){
        if(i & 1){
            if(i+2 >= r) while(c1--> 0) cout << 1;
            else {
                --c1;
                cout << 1;
            }
        }
        else{
            if(i+2 >= r) while(c0-- > 0) cout << 0;
            else {
                --c0;
                cout << 0;
            }
        }
    }
    cout << '\n';
}
int main(){
    int t;
    cin >> t;
    while(t-- > 0) work();
}