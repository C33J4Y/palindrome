#include <iostream>

using namespace std;

//Program to find if a string is palindrome
//Iterates through half of the string and checks is the first
//Half of the string and checks if it equals the second half.
//as soon as a character from the first half does not match the 
//second half. it returns FALSE.

int main() {
  string s = "tacocaat";

 bool b = true;

 for (int i = 0; i < (s.length()-1)/2; i ++){
   if (s[i] != s[(s.length())-i-1]){
     b = false;
   }
 }

cout << b;

}