#include <iostream>
using namespace std;

int main() {

    int N;

    cout << "Enter number of N: "<<endl;
    //cin >> N;
    N=5;

    for(int row = 1; row <= N; ++row) {
        for(int space = 1; space <= N-row; ++space){
            cout << "  ";
        }
            

        for(int i = 1; i <= row; ++i){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}