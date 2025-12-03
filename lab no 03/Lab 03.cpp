//                Task No 01
//include<iostream>
//using namespace std;
//int main (){
//  double x1,x2,y1,y2,squared_distance;
//     x1=3,y1=4,x2=6,y2=8;
//     squared_distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
//     cout<<"The sequard_distance between the points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is = "<<squared_distance;     
//}#

//               Task No 02
//#include<iostream>
//using namespace std;
//int main (){
//   double item1 = 12.95;
//   double item2 = 24.95;
//   double item3 = 6.95;
//   double item4 = 14.95;
//   double item5 = 3.95;
//   double total_amount,sale_tax;
//   cout<<"item 1=$"<<item1<<endl;
//   cout<<"item 2=$"<<item2<<endl;
//   cout<<"item 3=$"<<item3<<endl;
//   cout<<"item 4=$"<<item4<<endl;
//   cout<<"item 5=$"<<item5<<endl;
//   double subtotal=item1+item2+item3+item4+item5;
//   cout<<"the subtotal is = $"<<subtotal<<endl;
//   sale_tax=0.06*subtotal;
//   cout<<" sale tax(6%) is  =$ "<<sale_tax<<endl;
//   total_amount=subtotal+sale_tax;
//   cout<<"total:$"<<total_amount;
//}

//               Task No 03
#include<iostream>
#include<iomanip>       //Use for set precision.     
using namespace std;
int main (){
	float scores1=85.5,scores2=90.75,scores3=88.25,average;
	average=(scores1+scores2+scores3)/3 ;
	cout<<"The average 85.5, 90.75 and 88.25 = "<<setprecision(4)<<average;
    return 0;	
}

 
