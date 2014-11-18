#include <iostream>

using namespace std;

#define DIFF 1000000

void Generate_Primes(unsigned long long * primes, unsigned long start, unsigned long end);


int main()
{
    unsigned long long sum = 0;
    int i;
    unsigned long long primes[DIFF] = {0};
    //Generate List of prime numbers from a to b
    Generate_Primes(primes, 2, 2000000);

    /*
    for(i = 0; i < DIFF; i++)
    {
        if(i % 20 == 0)
            cout << endl;
        cout << primes[i] << " ";
    }
    */

    //Take the sum of the list of prime numbers from a to b
    for(i = 0; i < DIFF; i++)
        sum += primes[i];

    cout << "\nThe Sum is: " << sum << endl;

    cin.get();
    return 0;
}

void Generate_Primes(unsigned long long * primes, unsigned long start, unsigned long end)
{
    int j = 1;      //index into the primes array
    primes[0] = 2;
    bool prime = true;

    //Go thought poptential prime numbers (i) and find actual prime numbers
    for(int i = 3; i < end; i++)
    {
        //check if i is divisible by the previous prime numbers
        for(int k = 0; k < j; k++)
        {
            if(i % primes[k] == 0)
            {
                //i is not prime
                prime = false;
                break;
            }
        }

        if(prime)
            //i is prime, set next value in prime array to i
            primes[j++] = i;
        prime = true;
    }
    
}

