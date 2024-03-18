#include <iostream>
using namespace std;

int main() {
    
    int a,b,c;
    cin >> a >> b >> c;
    
    if ((a*a == b*b + c*c) or (b*b == a*a + c*c) or (c*c == a*a + b*b))
        cout << "YES";
    else
        cout << "NO";
}
