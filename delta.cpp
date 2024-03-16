#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N - i; j++)
            cout << '.';
        if(i==1)
        {
            cout << 'D';
        }
        else if(i==N)
        {
            for(int k =1; k <= N; ++k)
            {    
                cout << 'D';
                if(k != N)
                    cout <<'.';
            }
        }
        else
        {
            cout << 'D';
            for(int k =1; k <= 2*i-3; ++k)
                cout << '.';
            cout << 'D';    
        }
        for(int j = 1; j <= N - i; j++)
            cout << '.';    
            
        cout << '\n';
    }
}
