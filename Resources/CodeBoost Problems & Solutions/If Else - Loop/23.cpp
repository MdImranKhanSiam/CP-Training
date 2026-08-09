#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int n;

    cin >> n;

    int sum = 0;

    for( int i = 1; i <= n; i++ )
    {
        sum += i;
    }

    cout << "Sum of natural numbers: " << sum << endl;
}