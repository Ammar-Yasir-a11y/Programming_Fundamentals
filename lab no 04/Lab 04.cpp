//                    Task NO 1
//#include <iostream>
//using namespace std;
//int main(){
//	
//	int num1,num2;     
//	cout<<"Enter an integer : ";
//	cin>>num1;        
//	cout<<"Enter an integer : ";	
//	cin>>num2;
//	string result1 = (num1%2==0)? "even":"odd";  
//	string result2 = (num2%2==0)? "even":"odd";
//	cout<<"The number "<<num1<<" is "<<result1<<endl; 
//	cout<<"The number "<<num2<<" is "<<result2<<endl;
//	return 0;
//}
//               Task NO 02
//#include <iostream>
//using namespace std;
//int main(){	
//	int age1,age2,age3;	
//	cout<<"Enter your age : ";
//	cin>>age1;
//	cout<<"Enter your age : ";
//	cin>>age2;
//	cout<<"Enter your age : ";
//	cin>>age3;	
//	string result1= (age1<=13)? "Child":(age1<=19)? "Teenager":"Adult";
//	cout<<"Age "<<age1<<" falls under the category : "<<result1<<endl;
//	string result2= (age2<=13)? "Child":(age2<=19)? "Teenager":"Adult";
//	cout<<"Age "<<age2<<" falls under the category : "<<result2<<endl;	
//	string result3= (age3<=13)? "Child":(age3<=19)? "Teenager":"Adult";
//	cout<<"Age "<<age3<<" falls under the category : "<<result3<<endl;
//	return 0;
//}
//                  Task NO 03
#include <iostream>
using namespace std;
int main()
{
	
	int b1,l1; 
	cout<<"Enter your Account Balance : $";
	cin>>b1;
	cout<<"Enter Loyality Status (1 for loyal,0 for not loyal ) : ";
	cin>>l1; 
	
	string result1= (b1<=100)? "Low Balance Account": (b1<=500)? "Standard Account":"Premium Account";
	cout<<"Account Type : "<<result1<<endl;
	
	string result2= (b1>200 && l1==1)? "Eligible":"Not eligible";
	cout<<"Special Offer Eligibilty Status : "<<result2<<endl;
	
	return 0;
}
