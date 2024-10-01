//Created on 9/30
//Pratice learing Variables

#include <iostream>
#include<cmath>
using namespace std;

//This function will show addition and subscraction
//Has inputs
//Prints the addition and subscraction problems

int globe;
const float pi = 3.14;

void addNumbers(float input1, float input2){  //function declaration with function name addNumber.
 cout<<input1<< "+"<< input2<< "="<< input1+input2<<"\n";//function body
 globe = globe +1;
}

void subNumbers(float input1, float input2){
 cout<<input1<< "-"<< input2<< "="<< input1-input2<<"\n"; //function body
 globe = globe -1;
}
int main() {
  float num1 = pi;

 cout<<"Please enter a number between 1 and 10: ";
  cin>> num1;


 addNumbers(num1,globe); //function call
 subNumbers(num1,globe); //function call
}
