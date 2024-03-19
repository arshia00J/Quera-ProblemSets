#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int degree;
    while (n>0)
    {
        cin >> degree;
        if (degree > 15)
            cout << "cooler\n";
        else
            cout << "heater\n";
        n--;
    }
    
}
