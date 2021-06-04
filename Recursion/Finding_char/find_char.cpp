#include <iostream>
#include <string>
using namespace std;



int function(string word, int len,char chara)
{
    static int flag =0;
    if (word[len] == chara)
    {
        flag = 1;
    }

    if (len== 1)
    {
        return 1;
    }    
    (function(word,len-1,chara));
    return flag;


}

int main ()
{
    cout << "Enter the string " << endl;
    string word;
    word = "Ahsan";

    cout << "Enter the charater which you want to find" << endl;
    char chara;
    chara = 'r';
    int cat;
    int len =0;
    len = word.length();

    
    cat = function(word,len-1,chara);
    if (cat == 1)
    {
        cout << "I found the Charater " << endl;
    }
    else
    {
        cout << "I can't able to find the charater " << endl;
    }
}