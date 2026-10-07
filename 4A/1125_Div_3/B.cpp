#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;

    vector<int> st;
    vector<int> missed;

    for(int i=1;i<=n;i++){
        char c=s[i-1];
        if(c-'0'==1){
            st.push_back(i);
        }
        else if(c-'0'==2){
            if(!st.empty()){
                missed.push_back(i);
               st.pop_back();
            }
        }
    }

    cout << st.size()+missed.size() << '\n'; 

    size_t i = 0;
    size_t j = 0;

    while(i < st.size() && j < missed.size()){
        if(st[i] <= missed[j]){
            cout << st[i] << " ";
            i++;
        }
        else{
            cout << missed[j] << " ";
            j++;
        }
    }
    while(i < st.size()){
        cout << st[i] << " ";
        i++;
    }
    while(j < missed.size()){
        cout << missed[j] << " ";
        j++;
    }

    cout << '\n';
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