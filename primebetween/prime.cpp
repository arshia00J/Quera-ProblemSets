#include <iostream>

using namespace std;

int main() {
    int start, end;
    bool isPrime;

    cin >> start;
    cin >> end;

    for (int i = start; i <= end; ++i) {
        if (i <= 1)
            continue;

        isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << endl;
    }

    return 0;
}
