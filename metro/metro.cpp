#include<iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, a1, b1, c1, d1, e1, f1, g1, h1;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    cin >> a1 >> b1 >> c1 >> d1 >> e1 >> f1 >> g1 >> h1;
    
    int pairs = 0;
    
    pairs += (a == 1 && a1 == 1) ? 1 : 0;
    pairs += (b == 1 && b1 == 1) ? 1 : 0;
    pairs += (c == 1 && c1 == 1) ? 1 : 0;
    pairs += (d == 1 && d1 == 1) ? 1 : 0;
    pairs += (e == 1 && e1 == 1) ? 1 : 0;
    pairs += (f == 1 && f1 == 1) ? 1 : 0;
    pairs += (g == 1 && g1 == 1) ? 1 : 0;
    pairs += (h == 1 && h1 == 1) ? 1 : 0;
    
    cout << pairs;
    
    return 0;
}
