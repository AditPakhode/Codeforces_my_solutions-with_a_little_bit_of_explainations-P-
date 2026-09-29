#include <bits/stdc++.h>

using namespace std;
int int_ceil(int n, int d){
    return (n+d-1)/d;
}
int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int hours=int_ceil(n, x+y);
        hours=min(hours, int_ceil(n-z*x, x+10*y)+z);
        cout << hours << '\n';
    }
    return 0;
}