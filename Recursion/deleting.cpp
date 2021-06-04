#include <iostream>
using namespace std;


int function(string str,int length)
{
	static int i =0;
	static int j =0;
	if (i == length-1)
	{
		str[j] = ' ';
		return 0;
	}
	if (str[i] == 'S')
	{
		str[i] = str[j+1];
		cout << str[i] << endl;
		j++;
	}
	str[i] = str[j];
	cout << str[i] << endl;
	i++;
	j++;
	function(str,length);
}

int main()
{
	string str = "AHSAN";
	function(str,5);

}