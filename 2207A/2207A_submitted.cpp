#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t-- > 0){

        int min=0, max=0, n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=1;i<n-1;i++){
            if(s[i-1] == '1' && s[i+1] == '1'){
                s[i]='1';
            }
        }
        for(char i:s){
            if(i=='1') max++;
        }
        for(int i=1; i<n-1; i++){
            if(s[i-1] == '1' && s[i+1] == '1'){
                s[i]='0';
            }
        }
        for(char i:s){
            if(i == '1') min++;
        }
        cout << min << " " << max << '\n';
    }
    return 0; 
}