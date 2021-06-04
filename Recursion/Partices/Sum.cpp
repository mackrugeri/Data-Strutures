#include <iostream>
using namespace std;

int function(int N)
{
    if (N == 1)
    {
        return 1;
    }
    else
    {
        return ( N+ function(N-1)); 
    }
}

int main ()
{
    cout << "Enter the range of number" << endl;
    int N;
    cin >> N;

    cout << function(N) << endl;
}