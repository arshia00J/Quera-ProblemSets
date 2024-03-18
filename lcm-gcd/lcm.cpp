#include <iostream>

using namespace std;

int main() {
    int a, b, m = 1;
    cin >> a >> b;
    while(true)
    {
        if(m % a == 0 and m % b == 0)
            break;
        m++;
    }

    cout << a*b/m << ' ' << m;

    return 0;
}
