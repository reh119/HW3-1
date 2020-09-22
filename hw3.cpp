#include <iostream>
#include "hw3.h"

/****
* PSEUDOCODE:
set first equal to 0, end equal to size -1
make a while loop
while first is less than end
set temp variable equal to first element in array
set first element equal to last element 
set last element equal to temp
increment counters


Length needs to be added as a parameter because in order to find out end/last, we need a size of the array. 
*
*/


void ReverseArray( int arr[], int n){  
 
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
checks for open parentheses, adds one 
checks for closed paren, subtrcats 1
if open_paren is over -0, not balanced 
after finsining reading, if open_paren = 0, parentheses are balanced 
*
*/ 
  bool HasBalancedParentheses(string input){

    int open_paren =0; 
    

for (int i = 0; i < input.length(); i++){
  if (input[i]=='(')
   open_paren+=1;

  else if(input[i]==')') 
   open_paren-=1; 
    
    if (open_paren<0)
    return false;

}
  if (open_paren == 0)
   return true;
   else 
   return false; 
  }


// bool InDogish(std::string word){
 
// char letter; 
// return DogishHelper(word,letter);
  
// }

bool DogishHelper( std::string word, char letter){


 if(word == "") {
 return false;
    }
    std::cout << word << std::endl;

 if(word[0] == letter) {
     return true;
    } else {
 return DogishHelper(word.substr(1,word.length()), letter);
    }
}