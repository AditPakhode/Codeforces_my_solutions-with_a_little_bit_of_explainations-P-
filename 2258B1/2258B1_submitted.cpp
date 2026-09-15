#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n, m;
        cin >> n >> m;
        int arr[n];
        vector <int> freq(m+1, 0);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }
        vector <int> suffix(m+2, 0);
        for(int i=m;i>0;i--){
            suffix[i]= suffix[i+1] + freq[i];
        }
        int max=0;
        for(int i=1;i<=m;i++){
            int count = suffix[i];
            if(2*i <= m){
                count+=freq[2*i];
            }
            if(max < count){
                max = count;
            }
            count = 0;
        }
        cout << max << '\n';
    }
    return 0;
}