#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int n;

    cin >> n;

    int sum = 0;

    while (n > 0) {

        int last_digit = n % 10;

        sum += last_digit;

        n = n / 10;
    }

    cout << sum << endl;
}