#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int solvable_answer = 0;
    while(n-- > 0){
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        if(petya + vasya + tonya >= 2) solvable_answer+=1;
    }
    cout << solvable_answer << endl;
    return 0;
}