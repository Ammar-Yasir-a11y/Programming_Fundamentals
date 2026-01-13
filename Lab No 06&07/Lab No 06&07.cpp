#include <iostream>
using namespace std;
int main() {
//Task No 01	
//    int num;
//    cout << "Enter an integer number: ";
//    cin >> num;
//    if (num > 0) {
//        cout << "The number is Positive." << endl;
//    }
//    else if (num < 0) {
//        cout << "The number is Negative." << endl;
//    }
//    else {
//        cout << "The number is Zero." << endl;
//    }
                //Task No 02
//    int temperature;
//    cout << "Enter the temperature in Celsius: ";
//    cin >> temperature;
//    if (temperature >= 40) {
//        cout << "Stay indoors. It is extremely hot and dangerous for health." << endl;
//    }
//    else if (temperature >= 30 && temperature <= 39) {
//        cout << "Drink plenty of water to stay hydrated." << endl;
//    }
//    else if (temperature >= 20 && temperature <= 29) {
//        cout << "The weather is pleasant and suitable for outdoor activities." << endl;
//    }
//    else {
//        cout << "Wear warm clothes to stay comfortable in the cool weather." << endl;
//    }
              //Task No 03
//    string username;
//    string password;
//    string correctUsername = "admin";
//    string correctPassword = "12345";
//    cout << "Enter username: ";
//    cin >> username;
//    cout << "Enter password: ";
//    cin >> password;
//    if (username == correctUsername && password == correctPassword) {
//        cout << "Access Granted." << endl;
//    }
//    else if (username == correctUsername && password != correctPassword) {
//        cout << "Wrong Password." << endl;
//    }
//    else {
//        cout << "User Not Found." << endl;
//    }
          //Task No 03
//int sub1,sub2,sub3,obtain_marks,total_marks=300;
//	double percentage;
//	char grade;
//	cout<<"enter the marks of sub1 is = ";
//	cin>>sub1;
//	cout<<"enter the marks of sub2 is = ";
//	cin>>sub2;
//	cout<<"enter the marks of sub3 is = ";
//	cin>>sub3;
//	obtain_marks=sub1+sub2+sub3;
//	cout<<"the obtain marks is = "<<obtain_marks<<endl;		
//    percentage=(obtain_marks*100/total_marks);
//    cout<<"The  is  percentage is = "<<percentage<<"%"<<endl;
//    if(percentage>=90){
//    	cout<<"Grade A"<<endl;
//	}
//   else if(percentage>=80&&percentage<90){
//    	cout<<"Grade B"<<endl;
//	}
//  else if(percentage>=70&&percentage<80){
//    	cout<<"Grade C"<<endl;
//	}
//  else if(percentage>=60&&percentage<70){
//    	cout<<"Grade D"<<endl;
//	}
//  else{
//  	cout<<"Grade F"<<endl;
//  }	
//  if(obtain_marks>=270){
//  	cout<<"you are eligibal for merit scholarship";
//  }
//  else if(obtain_marks<=240){
//  	cout<<"you are eligibal for regular scholarship";
//  }
  //Task No 05
  int age,income;
   cout<<"enter the age is = ";
   cin>>age;
   cout<<"enter the incom is = ";
   cin>>income; 
   if(age<18){
   cout<<"you are not eligible for loan you are under 18 year of age ";
}
   else if(income<30000){
   	cout<<"you meet the age requriment but are not eligibal for a loan beacuse your income is below 30000 ";
   }
   else{
   cout<<"congratulation! you are eligibale for a loan";
   }
//           Task No 06
	string correct_username="admin";
	int correct_password=1234;
	int password;
	cout<<"enter the password is = ";
	cin>>password;
	string username,role;
	cout<<"enter user name is = ";
	cin>>username;
	if(correct_username==username&&correct_password==password){
		cout<<"Authenthication successsfull "<<endl;
	}
		if(correct_username!=username||correct_password!=password){
		cout<<"Authenthication faile.Access denied "<<endl;
	}
		cout<<"enter the role is ";
	cin>>role;
	if(role=="Admin"){
		cout<<"full access";
	}else if(role=="Guest"){
		cout<<"Limited access";
	}else{
		cout<<"No access";
	}
}



