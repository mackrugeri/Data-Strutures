#include <iostream>
using namespace std;



int main()
{
	int number;
	 cin>>number;
      int counter=0;
      while(number)
     {        
            number=number/10;
            counter++;
      }
      cout<<counter<<endl;;
}


