#include <bits/stdc++.h>
using namespace std;

vector<bool> prime_num(int max)
{
    vector<bool> is_prime(max+1, true);

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i*i <= max; i++)
    {
        if (is_prime[i])
        {
            for (int j = i*i; j <= max; j+=i)
            {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

void submit(const vector<bool>& is_prime)
{
    int num;
    cin >> num;

    for (int i = 2; i*i <= num; i++)
    {
        if (is_prime[i])
        {
            cout << i*i << " ";
        }
        
    }
    
    
    cout << endl;
}


int main()
{
    ios::sync_with_stdio(false);                                    // Speed up input/output
    cin.tie(nullptr);
    cout.tie(nullptr);

    int so_bo_test;
    cin >> so_bo_test;

    vector<bool> is_prime = prime_num(1000000);

    while (so_bo_test--)
    {
        submit(is_prime);
    }

    return 0;
}