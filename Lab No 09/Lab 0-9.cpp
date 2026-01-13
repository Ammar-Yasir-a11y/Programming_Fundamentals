#include<iostream>
using namespace std;
int main (){
//	Task No 01
	int N;
	cout<<"Enter a number : ";
	cin>>N;
	int i = 1;
	while (i <= N){
		cout<<i<<endl;
		i++;
	}
	//	Task No 02
		int n,a;
	cout<<"Enter a number  to print the table : ";
	cin>>n;
	cout<<"\nEnter the limit  the table : ";
	cin>>a;
	
	int i = 1;
	while (i <= a){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;	
	}	
	//	Task No 03
		int n;
	cout<<"Enter a positive number:  ";
	cin>>n;
	while (n <= 0){
	cout<<"    Erorr! \n\tThe number you entered is not Positive.\n"<<endl;
	cout<<"Please enter positive number : ";
	cin>>n;
	}
	cout<<"You entered : "<<n<<endl;
	n++;
		//	Task No 04
		int  i = 1;
	int sum = 0;
	while (i<=5){
		sum =sum + i;
		i++;
	}
	cout<<"Sum of first Natural number is : "<<sum<<endl;
	//	Task No 05
		int defaultBalance = 1000;
	double amount;
	int choice;
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout<<"\n\t<----------Simple Banking System------------>\n";
		
		
	while (1){        //Use while loop
	
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout<<"\n1. Deposite Money\n";
		cout<<"2. Withdraw Money\n";
		cout<<"3. Check Balance\n";
		cout<<"4. Exit\n";
		cout<<"Choose option from (1 - 4): ";
		cin>>choice;	
		switch (choice){            // for deposite money ! use switch
			case 1:
				cout<<"\nEnter amount to deposite : ";
				cin>>amount;
				if (amount>0){
				defaultBalance = defaultBalance+amount;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				cout<<"\n\t*** Deposite Successfully! ***"<<endl;
				
				cout<<"\nYour current balance is : "<<defaultBalance<<endl;
				}
				else{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout<<"\nInvalid! Amount can't be nagetive\n"<<endl;
				}
				break;
			case 2:						// for withdraw amount 
			
				cout<<"Enter amount you want to withdraw : ";
				cin>>amount;
				if (amount<defaultBalance){
					defaultBalance = defaultBalance - amount;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
					cout<<"Your remaning balance is: "<<defaultBalance<<endl;
				}
				
				else{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout<<"\nInsufficient balance!\n"<<endl;
				
				}
				break;
			case 3:					// for check balance
			
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
				cout<<"\nYour current account balance is : "<<defaultBalance<<endl;
				break;
			case 4:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				cout<<"\n\t=== Thank you for using our Service. === \n"<<endl;
				return 0;
					
			default:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);	
			    cout<<"\nError! please choose the correct one : \n";
			    break;  	
		}	
}
	//	Task No 06
	string password="12345";
	string new_password;
	do {
		cout<<"Enter your  Password: ";
		cin>>new_password;
		if (password!= new_password){
			cout<<"Incorrect possword!\n == Try again! ==";
		
		return 0;
	}
		}
		while (password!=new_password);
		
		cout<<"*** Access Garanted ***";
		}
//	Task No 07
	int main_choice, sub_choice;
	int again_main;
	double quantity, bill = 0;
	int again_sub1 = 0, again_sub2 = 0, again_sub3 = 0;
	
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout<<"\n\t\t============ RESTAURENT MENU ============\n\n";
		
		do {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout<<" 1. Breakfast\n";
			cout<<" 2. Lunch\n";
			cout<<" 3. Dinner\n";
			cout<<" 4. Exit\n";
			cout<<"Enter your choice : ";
			cin>>main_choice;
			
		switch (main_choice){			// breakfast	
			case 1:				
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
				cout<<"\n\t\t<------------Breakfast------------>\n\n";
			
			do {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout<<"1. Anda Paratha (RS.40)\n";
				cout<<"2. Nan Channy (RS.60)\n";
				cout<<"3. Siri Paye (RS.150)\n";
				cout<<"4. Tea (RS.15)\n";
				
				cout<<"Enter Item Number : ";
				cin>>sub_choice;
				
				cout<<"Enter quantity : ";
				cin>>quantity;
				
			switch (sub_choice){
				case 1:
					bill =(bill + 40 * quantity);
					break;
				case 2:
					bill = (bill + 60 * quantity);
					break;
				case 3:
					bill = (bill + 150 * quantity);
					break;
				case 4:
					bill = (bill + 15 * quantity);
					break;
				default:
					cout<<"Invalid Item you entered!\n";
			}
			cout<<"Do you want to order more from breakfast (1 = Yes , 0 = No) : ";
			cin>>again_sub1;
			
			}
			while (again_sub1 == 1);
			break;
			
		case 2:						// Lunch

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout<<"\n\t\t<------------Lunch------------>\n\n";
				
			do{
					
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout<<"1. Chicken Karahi (RS. 1050/KG)\n";
				cout<<"2. Mutton Karahi (RS. 1800/KG)\n";
				cout<<"3. Egg Fried Rice (RS.450/Plate)\n";
				cout<<"4. BBQ (RS. 1050/dozen)\n";
				
				cout<<"Enter Item Number : ";
				cin>>sub_choice;
				
				cout<<"Enter quantity : ";
				cin>>quantity;
			
			switch (sub_choice){
				
				case 1:
					bill =(bill + 1050 * quantity);
					break;
				case 2:
					bill = (bill + 1800 * quantity);
					break;
				case 3:
					bill = (bill + 450 * quantity);
					break;
				case 4:
					bill = (bill + 1050 * quantity);
					break;
				default:
					cout<<"Invalid Item you entered!\n";
			}
			
			cout<<"Do you want to order more from Lunch (1 = Yes , 0 = No) : ";
			cin>>again_sub2;
			
				
			}
			while (again_sub2 == 1);
			break;
			
		case 3:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout<<"\n\t\t<------------Dinner------------>\n\n";	
			
		do{							// Dinner
		
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout<<"1. Chicken Karahi (RS. 1050/KG)\n";
			cout<<"2. Mutton Karahi (RS. 1800/KG)\n";
			cout<<"3. Egg Fried Rice (RS.450/Plate)\n";
			cout<<"4. BBQ (RS. 1050/dozen)\n";
			cout<<"5. Saji (RS. 800/KG)\n";
			
			cout<<"Enter Item Number : ";
			cin>>sub_choice;
		
			cout<<"Enter quantity : ";
			cin>>quantity;
		switch (sub_choice){
			
				case 1:
					bill =(bill + 1050 * quantity);
					break;
				case 2:
					bill = (bill + 1800 * quantity);
					break;
				case 3:
					bill = (bill + 450 * quantity);
					break;
				case 4:
					bill = (bill + 1050 * quantity);
					break;
				case 5:
					bill = (bill + 800 * quantity);
					break;
				default:
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout<<"Invalid Item you entered!\n";
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			cout<<"Do you want to order more from Dinner (1 = Yes , 0 = No) : ";
			cin>>again_sub3;
			
				
			}
			while (again_sub3 == 1);
			break;
		case 4:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout<<"Total Bill RS : "<<bill<<endl;		
			cout<<"\n\t\t=======Thank you for Visiting!========";
			return 0;
	
		default:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"Invalid Main Menu Choice! Please Correct One --->\n";	
			
		}				
		
			
		}while (true);
	
		return 0;			
}

