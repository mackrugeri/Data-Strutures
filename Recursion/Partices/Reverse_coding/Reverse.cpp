#include <iostream>
using namespace std;


int function (int len, string word){
	
	static int  i = len;
	if (i == 0)
	{
		cout << word[i];
		return 1;
	}
	else
	{
		cout << word[i];
		i--;
		function(len,word);
	}
	
}

int main ()
{
	cout << "Enter the string " << endl;
	string word;
	cin >> word;

	int len =0;
	len = word.length();

	function(len-1,word);
}