#include <iostream>
#include <string>
#include "hw3.h"

using std::endl;

int main() {
  //Test ReverseArray();

    //std::cout << DogishHelper("gadgdks",'d') << std::endl;
  int arr[] = { 1, 2, 3, 4, 5 };
  int n = sizeof(arr)/sizeof(arr[0]); // size of array
  ReverseArray(arr,n); // calling function, passing array + size 

	 for (int i = 0; i < n; i++) {
	 	std::cout << arr[i] << " ";
	 }

 //Test HasBalancedParentheses();
  std::string statement1 = "((())())";
  if(HasBalancedParentheses(statement1)){
    	std::cout << "Is it Ballanced: " << std::endl;
  }

// // Test InDogish();
//  std::string mydogs = "dpoags";
//  If(InDogish(mydogs)){
//    	std::cout << "Part of Dogish? " << std:endl;
//  }

//  // Test bool InXish(sting mytext, sting myword);

}


