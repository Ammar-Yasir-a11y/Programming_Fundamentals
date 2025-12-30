#include <iostream>
using namespace std;
int main (){
//	 Task NO 01
//int integer;
//cout<<"Enter the an integer ";
//cin>>integer;
//if(integer>0){
//	cout<<"positive number";
//}
//else{
//	cout<<"negative number";
//}
//	 Task NO 02
//int integer;
//cout<<"Enter the an integer ";
//cin>>integer;
//if(integer%2==0){
//	cout<<"The nunmber is even";
//}
//else{
//	cout<<"the number is odd";
//}
//   Task NO 03
// 	int a,b,c;
//	cout<<"Enter the numbers a: ";
//	cin>>a;
//	cout<<"Enter the numbers b: ";
//	cin>>b;
//	cout<<"Enter the numbers c: ";
//	cin>>c;
//	if(a>b && a>c){
//	cout<<"a is the largest number"<<endl;
//	}
//	
//	if(b>a && b>c){
//	cout<<"b is the largest number"<<endl;
//	}
//	
//	if(c>a && c>b){
//		cout<<"c is the largest number"<<endl;
//	}
//   Task NO 04	
//	int marks;
//	cout<<"Enter your marks (out of 100): ";
//	cin>>marks;
//	if(marks>=90){
//		cout<<"A+"<<endl;
//	}
//	 if(marks>=80 && marks<=89){
//	 	cout<<'A'<<endl;
//	 }
//	 
//	 if(marks>=70 && marks<=79){
//	 	cout<<'B'<<endl;
//	 }
//	 if(marks>=60 && marks<=69){
//	 	cout<<'C'<<endl;
//	 }
//	 
//	 if(marks<60){
//	 	cout<<"Fail"<<endl;
//	 }
//   Task NO 05
//	char signal;
//	cout<<"Enter the colour signal (R , G , Y): ";
//	cin>>signal;
//	if(signal == 'R'){
//		cout<<"Red: Stop"<<endl;
//	}
//	
//	if(signal == 'G'){
//		cout<<"Green: Go"<<endl;
//	}
//	
//	if(signal == 'Y'){
//		cout<<"Yellow: Slow Down"<<endl;
//	}
//   Task NO 06	
//	float balance, withdraw;
//	cout<<"Enter your account balance: ";
//	cin>>balance;
//	
//	cout<<"Enter the amount you want to withdraw: ";
//	cin>>withdraw;	
//	
//	if(withdraw<=balance){
//		
//	balance=balance-withdraw;
//	
//	cout<<"Withdrawal Successful"<<endl;
//	
//	cout<<"remaining balance: "<<balance<<endl;
//	}
//	else{
//		cout<<"Insufficient balance."<<endl;
//	}
//   Task NO 07
//	int salary,work_experience;
//	
//	cout<<"Enter your salary amount: ";
//	cin>>salary;
//	
//	cout<<"Enter your work experience: ";
//	cin>>work_experience;
//	
//	if(salary>=25000 || (work_experience>5 && salary>=20000)){
//
//		cout<<"You are eligible for the loan."<<endl;	
//	}
//	else{
//		cout<<"You are not eligible for the loan."<<endl;
//	}
//   Task NO 08
char grade;
cout<< "Enter Employee Grade (A, B, or C): ";
cin>>grade;
int years;
cout<<"Enter Years of Service: ";
cin>>years;

float basic_salary;
float bonus;
float gross_salary;
float tax;
float Tax_percent;
float net_salary;


// Basic Salary Based on Grade

basic_salary = 0;
if( grade == 'A'||grade == 'a'){

    basic_salary = 50000;
cout<<"Basic Salary: "<<basic_salary<<endl;
}
if(grade == 'B'||grade == 'b'){

    basic_salary = 30000;
	cout<<"Basic Salary: "<<basic_salary<<endl;
}
if (grade == 'C'||grade == 'c'){

    basic_salary = 20000;
cout<<"Basic Salary: "<<basic_salary<<endl;
}
  // Bonus Calculation
  
if (years >= 10){

    bonus = 0.1 * basic_salary;
cout<<"Bonus Amount : "<<bonus<<endl;
}
if (years >= 5 && years <= 9){

    bonus = 0.5 * basic_salary;
cout<<"Bonus Amount : "<<bonus<<endl;
}
if (years < 5){

    bonus = 0;
cout<<"Bonus Amount : "<<bonus<<endl;
}
  //  Gross Salary
   
gross_salary = basic_salary + bonus;
cout<<"Gross Salary: "<<gross_salary<<endl;

  //  Tax Calculation
   
if (gross_salary > 40000){

    tax = gross_salary* 0.2;
cout<<"Tax Deducted: "<<tax<<endl;
}
if (gross_salary >= 30000 && gross_salary <= 40000){

    tax = gross_salary * 0.1;
cout<<"Tax Deducted: "<<tax<<endl;
}
if (gross_salary < 30000){

    tax = 0;
cout<<"Tax Deducted: "<<tax<<endl;
}
  //  Net Salary
  
net_salary = gross_salary - tax;
cout<<"Net Salary : "<<net_salary<<endl;

	 } 
