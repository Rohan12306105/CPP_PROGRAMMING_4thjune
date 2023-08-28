#include <iostream>
using namespace std;

int main() {

    double n1, n2, n3,n4,n5;

    cout << "Enter three numbers: "<<endl;
    cin >> n1 >> n2 >> n3>>n4>>n5;

    if(n1 >= n2 && n1 >= n3 && n1>=n4 && n1>=n5)
        cout << "Largest number: " << n1;



    else if(n2 >= n1 && n2 >= n3 && n2>=n4 && n2>=n5)
        cout << "Largest number: " << n2;



    else if(n4 >= n1 && n4 >= n2 && n4 >= n3 && n4 >= n5)
        cout << "Largest number: " << n4;



    else if(n5 >= n1 && n5 >= n2 && n5 >= n3 && n5 >= n4)
        cout << "Largest number: " << n5;



    else
        cout << "Largest number: " << n3;



    return 0;
}
