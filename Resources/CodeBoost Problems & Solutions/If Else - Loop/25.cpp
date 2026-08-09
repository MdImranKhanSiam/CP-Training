#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int n;

    cin >> n;

    for( int i = 2; i <= n; i++ )
    {
        bool is_prime = true;

        for( int j = 2; j <= i/2; j++ )
        {
            if (i % j == 0) {

                is_prime = false;

                break;
            }
        }

        if (is_prime) {

            cout << i << " is a prime number" << endl;
        }
    }
}