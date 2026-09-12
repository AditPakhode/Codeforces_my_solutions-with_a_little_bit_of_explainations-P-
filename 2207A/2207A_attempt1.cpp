#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t-- > 0){

        int min=0, max, n;
        cin >> n;
        string s;
        cin >> s;
        max=(s[0] == '1')? 1 : 0;
        for(int i=1;i<n-1;i++){
            if(s[i-1] == '1' && s[i+1] == '1' && s[i] == '0'){
                s[i]='1';
            }
            if(s[i]=='1'){
                max+=1;
            }
        }
        max+=(s[n-1] == '1')? 1 : 0;
        int countOne = (s[0] == '1')? 1 : 0;
        min+=(s[0] == '0')? 1 : 0;
        for(int i=1; i<n-1; i++){
            if(s[i]=='1'){
                countOne++;
                continue;
            }
            else{
                min+=countOne/2;
                countOne=0;
            }
            min+=1;
        }
        if(s[n-1] == '1'){
            min+=countOne/2;
        }
        else{
            min++;
        }
        cout << n - min << " " << max << '\n';
    }
    return 0; 
}