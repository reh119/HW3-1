#include <iostream>
#include <string>
#include "hw3.h"

using std::endl;
using std::cout;

int main() {
  //Test ReverseArray();

   // std::cout << DogishHelper("gadgdks",'d') << std::endl;
  int arr[] = { 1, 2, 3, 4, 5,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(arr[0]); // size of array
  ReverseArray(arr,n); // calling function, passing array + size 

	 for (int i = 0; i < n; i++) {
	 	std::cout << arr[i] << " ";
	 }

 //Test HasBalancedParentheses();
  std::string statement1 = " ";
  if(HasBalancedParentheses(statement1)){
    	std::cout << "balanced " << std::endl;
  }
  else 
  cout << "not balalnced"<< endl ; 

 // Test InDogish();
 char letter;
  std::string mydogs = "dowwdddddg";

  if(DogishHelper(mydogs,letter)){
    	std::cout << "Part of Dogish " << std::endl;
  }
  else 
  cout <<"not part of dogish" << endl ;

//  // Test bool InXish(sting mytext, sting myword);

}


