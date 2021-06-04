#include <iostream>
using namespace std;

int elfish (int length, string word)
{
	static int i =0;
	if(i == length)
	{
		if(word[i] == 'e' || word[i] == 'l' || word[i] == 'f')
		{
			cout << "It is True " << endl;
			return 0;
		}
	}
	if (word[i] == 'l' || word[i] == 'e' || word[i] == 'f')
	{
		cout << "It is True " << endl;
		return 0;
	}
	i++;
	return (elfish(length,word)); 

}


int main ()
{
	cout << "Enter the string " << endl;

	string word;
	cin >> word;
	int len = word.length();
	elfish(len,word);
}