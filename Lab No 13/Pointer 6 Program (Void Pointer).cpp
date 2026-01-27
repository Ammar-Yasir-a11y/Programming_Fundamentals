#include<iostream >
using namespace std;
int main(){
    
	//  Program ---> 06

  void *ptr;
  int a=10;
  ptr=&a;
  
  // Type casting
  cout<<*(int*)ptr<<endl;

return 0;
}
