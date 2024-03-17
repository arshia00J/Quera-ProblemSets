#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tmp = 0;
    while(n != 0)
    {
        int num;
        cin >> num;
        
        if (num > tmp)
            tmp = num;
        n--;
    }
    cout << tmp;
}