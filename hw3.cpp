#include <iostream>
#include "hw3.h"

/****
* PSEUDOCODE:
*
*/
using namespace std; 

void ReverseArray ( int arr[], int n){  
 
   
int first =0; 
int end = n-1; 
   while (first<end){
   int temp = arr[first];
   arr[first]=arr[end]; 
   arr[end]=temp;
   
   first++;
      end--; 
      
   }

    
	}
/****
* PSEUDOCODE:
*
*/ 
  bool HasBalancedParentheses(string input){




 return false; 

  }















bool DogishHelper( std::string word, char letter){
 if(word == "") {
 return false;
    }
    std::cout << word << std::endl;
 if(word[0] == letter) {
     ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
 
    } else {
 return DogishHelper(word.substr(1,word.length()), letter);
    }
}