#include<iostream>
using namespace std;
/* functionns are a set of code which performs something for you
functions are used to modularize code, make it reusable and easy to maintain
functions are used to increase reusability of code
functions are used to use same code multiple times 
*/
//void printname(string name){ //function definition
    //cout<<"Your name is "<<name<<endl;
//}
int sum(int num1, int num2){ //function definition
    int result = num1 + num2;
    return result; //return statement
}

int main (){
    // syntax to create a function
    /*
    return_type function_name (parameters){
        //body
        //return statement
    }
    */
   //string name; //variable declaration
   //cin>>name; //user input
   //printname(name); //function call
   int num1, num2;
   cin>>num1>>num2;
   int result = sum(num1, num2); //function call
   cout<< result;
   return 0;
}