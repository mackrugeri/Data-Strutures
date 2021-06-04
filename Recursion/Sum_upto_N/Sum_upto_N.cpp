#include <iostream>
using namespace std;

int Sum_real(int N )
{
	if (N ==1)
	{
		return 1;
	}
	return(N + Sum_real(N-1));
}


int main()
{
	cout << "Enter the Real number for Sum all its pervious Value " << endl;
	int N = 0;
	cin >> N;
	system("clear");
	cout << "The sum of value is " << N << " is " << Sum_real(N) << endl;
}