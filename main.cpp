#include <iostream>

using namespace std;



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