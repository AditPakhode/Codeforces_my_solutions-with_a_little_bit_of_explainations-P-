#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        long long take_a=abs(a+c-b);
        long long not_take=abs(a-b);

        long long take_b=abs(a-(b+c));

        if(take_a > not_take){
            cout << take_a << '\n';
        }
        else if(take_b < not_take){
            cout << take_b << '\n';
        }
        else{
            cout << not_take << '\n';
        }
    }
    return 0;
}