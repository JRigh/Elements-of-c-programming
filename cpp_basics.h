#-----------
# C++ basics
#-----------

# Example 1: Program to Print a Half-Pyramid Using *

#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}


# Example 2: Program to Print a Half-Pyramid Using Numbers

#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}


# Example 7: Program to Print a Pyramid Using Numbers

#include <iostream>
using namespace std;

int main() {

    int rows, count = 0, count1 = 0, k = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int space = 1; space <= rows-i; ++space) {
            cout << "  ";
            ++count;
        }

        while(k != 2*i-1) {
            if (count <= rows-1) {
                cout << i+k << " ";
                ++count;
            }
            else {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;
        
               cout << endl;
    }
    return 0;
}
