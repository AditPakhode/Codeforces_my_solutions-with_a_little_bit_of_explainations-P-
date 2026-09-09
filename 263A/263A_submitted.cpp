#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 5;
    int matrix[n][n];
    int li, lj;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                li=i;
                lj=j;
            }
        }
    }
    cout << (abs(lj-2) + abs(li-2));
    return 0;
}