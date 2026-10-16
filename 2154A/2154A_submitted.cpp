#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int cnt=0, prev=-1;
    string s;
    cin >> s;
    
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(prev!=-1 && abs(prev-i) >= k) cnt++;
            prev=i;
        }
    }
    if(prev!=-1) cnt++;
    cout << cnt << '\n';
}
int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}