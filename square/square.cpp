#include <iostream>
using namespace std;

int main() {
    
    int number;
    cin >> number;
    int square = 2;
    while (number >= square)
    {
        square *= 2;
        
    }
    cout << square;
}
