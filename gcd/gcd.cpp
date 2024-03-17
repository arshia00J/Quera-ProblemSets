#include <iostream>
using namespace std;

long long int hcf(long long int a, long long int b) {
    while (b != 0) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long int a, b;
    
    cin >> a >> b;

    long long int result = hcf(a, b);
    
    cout << result;
    
    return 0;
}
