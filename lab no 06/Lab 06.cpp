#include<iostream>
using namespace std;
int main(){
	int sub1,sub2,sub3,obtain_marks,total_marks=300;
	double percentage;
	char grade;
	cout<<"enter the marks of sub1 is = ";
	cin>>sub1;
	cout<<"enter the marks of sub2 is = ";
	cin>>sub2;
	cout<<"enter the marks of sub3 is = ";
	cin>>sub3;
	obtain_marks=sub1+sub2+sub3;
	cout<<"the obtain marks is = "<<obtain_marks<<endl;		
    percentage=(obtain_marks*100/total_marks);
    cout<<"The  is  percentage is = "<<percentage<<"%"<<endl;
    if(percentage>=90){
    	cout<<"Grade A"<<endl;
	}
   else if(percentage>=80&&percentage<90){
    	cout<<"Grade B"<<endl;
	}
  else if(percentage>=70&&percentage<80){
    	cout<<"Grade C"<<endl;
	}
  else if(percentage>=60&&percentage<70){
    	cout<<"Grade D"<<endl;
	}
  else{
  	cout<<"Grade F"<<endl;
  }	
  if(obtain_marks>=270){
  	cout<<"you are eligibal for merit scholarship";
  }
  else if(obtain_marks<=240){
  	cout<<"you are eligibal for regular scholarship";
  }
	return 0;
}


	

	

