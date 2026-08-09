#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int n;

    cin >> n;

    for( int i = 1; i <= 10; i++ )
    {
        int multiply = n * i;

        cout << n << " x " << i << " = " << multiply << endl;
    }
}