#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;
        long long ans=0;
        for(int i=1;i<=k; i++){
            ans+= y%x;
            y++;
            x++;
        }
        cout << ans << '\n';
    }
    return 0;
}