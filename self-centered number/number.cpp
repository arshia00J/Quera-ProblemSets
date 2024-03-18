#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int original_number = number; // Store the original number
    int result = 0;
    
    while (number > 0) {
        result *= 10;
        result += (number % 10);
        number /= 10;
    }

    if (original_number == result)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
