#include <iostream>
#include <vector>

using namespace std;
bool isPrimes(int num)
{
    if(num<2)return false;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i!=0)
        {
            return true;
        }
    }
    return false;
}
void findPrimes(const int arr[], size_t size, std::vector<int> &primes)
{
    // TODO: Implement
    for(int i=0;i<size;i++)
    {
        if(isPrimes(arr[i]))
        {
            primes.push_back(arr[i]);
        }
    }
}

int main()
{
    int numbers[] {4, 7, 12, 3, 9, 17, 29};
    
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> primes;

    findPrimes(numbers, size, primes);

    if (primes.empty())
    {
        cout << "No prime numbers found in the array.";
    }
    else
    {
        cout << "The prime numbers in the array are:";
        for (int prime : primes)
        {
            cout << " " << prime;
        }
        cout << endl;
    }
    return 0;
}
