#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int fact = 1;
    int i = 1;
    
    for (i; i<=n; i++)
    {
        fact*=i;
    }
    cout << fact;
}
