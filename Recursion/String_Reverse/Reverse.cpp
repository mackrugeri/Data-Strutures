#include <iostream>
#include <string>
using namespace std;

int string_reverse(int len, string str){
    static int  i=len;
    if (len == 1) {
      i--;
      cout << str[i];
      return 0;
    }
    i--;
    cout << str[i];
    return(string_reverse(len-1,str));

}


int main (){
  int len;
  cout << "Please Enter the String " << endl;
  string str;
  cin >> str;
  len = str.length();
  cout << len << endl;
  string_reverse(len, str);
}print ("Hello World")print ("Hello World")print ("Hello World")