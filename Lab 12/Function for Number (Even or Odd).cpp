#include<iostream>
using namespace std;

//                 Program  To Check If the Number("Even" Or "Odd")  Using Function

        
   int evenOdd(int N)
   {
   	if(N%2==0)
	   {
	   	 cout<<"\nThe Number is Even"<<endl;                     
	   }
	else
	{
		cout<<"\n\tThe Number is Odd"<<endl;
	}
	return 0;
	}  
   int main()
   {
   	int Number;
   	cout<<"Enter a Number to check(Even\Odd): ";
   	cin>>Number;
   	evenOdd(Number);
   	
   }

