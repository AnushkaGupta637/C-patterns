#include<iostream>
using namespace std;

void nTriangle(int n) {
    // Write your code here
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;  // Takes input for n
    nTriangle(n);  // Prints the triangle based on n
    // std::cin.get(); // Removed as it may cause issues
    return 0;
}
