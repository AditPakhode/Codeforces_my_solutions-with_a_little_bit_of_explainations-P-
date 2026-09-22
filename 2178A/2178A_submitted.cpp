#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        string s;
        cin >> s;
        int yeses=0;
        int nos=0;
        for(char i:s){
            if(i == 'Y'){
                yeses+=1;
            }
            else nos+=1;
        }
        if(yeses >=2 ) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}