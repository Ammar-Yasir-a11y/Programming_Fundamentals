#include <iostream>
#include<cmath>
using namespace std;
    
//              Program No 1---> Using Library function

	
    int main(){
    int sqroot,absolute,sinx,cosx,cube;	
	cout<<"Enter a number to find square root: ";
	cin>>sqroot;
	cout<<"The squarenroot is: "<<sqrt(sqroot)<<endl;
	cout<<"Enter a number to find cube:";
	cin>>cube;
	cout<<" The cube of number is:"<<pow(cube,3)<<endl;
    cout<<"Enter the angle cos: ";
    cin>>cosx;
    cout<<" The angle of cos is= "<<cos(cosx)<<endl;
    cout<<" Enter the angle sin: ";
    cin>>sinx;
    cout<<"The sin angle is= "<<sin(sinx)<<endl;
    cout <<"Enter the number to find absolute: ";
	cin>>absolute;
	cout<<"The absolute of number is ="<<abs(absolute)<<endl;
}


