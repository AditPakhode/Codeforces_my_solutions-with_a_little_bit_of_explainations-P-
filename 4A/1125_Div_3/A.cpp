#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x, y, R;
    cin >> x >> y >> R;
    for(int i=(-10-R); i<=10+R; i++){
        for(int j=-10-R;j<=10+R; j++){
            int X_=(x-i)*(x-i);
            int Y_=(y-j)*(y-j);
            if(X_+ Y_ == R*R){
                cout << i << " " << j << '\n';
                return;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}