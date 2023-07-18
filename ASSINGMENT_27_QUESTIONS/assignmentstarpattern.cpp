#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: "<<endl;
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";



        cout << endl;
    }

    return 0;
}