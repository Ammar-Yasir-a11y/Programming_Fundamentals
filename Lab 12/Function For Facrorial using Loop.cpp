#include <iostream>
using namespace std;
// Program No 4  factorial of Number 
 int factorial(int n)
 {
 	int factorial=1;
 	for(int i=1;i<=n;i++)
	 {
	 	 factorial*=i;
	 	
     }
	 	return factorial;
 }
	int main(){
	 
 	int Number;
 	cout<<"Enter a number to find factorial: ";
 	cin>>Number;
 	if(Number<0)
	 {	
	 	cout<<"\n\t\tThe factorial of number does not exist."<<endl;
	 }
	 else
	 {	
	 	cout<<"\n\t\tThe factorial of number is : "<<factorial(Number)<<endl;
	 }
	 return 0;

           }

