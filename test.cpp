#include <iostream>
using namespace std;
int main()
{
    system("cls");
    string check;
    int num;
    int i;
    int j;
    cout << "enter number to find prime numbers under " << endl;
    cin >> num;
    if (num <= 2)
    {
        cout << "no primes under " << num << endl;
    }
    else
    {
        cout << "number of primes under " << num << " are " << endl;
        for (i = 3; i < num; i += 1)
        {
            bool isprime = 1;
            for (j = 2; j < i; j += 1)
            {
                if (i % j == 0)
                {
                    isprime = 0;
                    break;
                }
            }
            if (isprime == 1)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}