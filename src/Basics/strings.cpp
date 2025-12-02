#include<iostream>
#include<string>
using namespace std;    
int main(){
    string s="uncho";
    int len=s.length(); //to find length of string
    s[len-1]='a'; //to change a particular character in string
    //cout<<s[2];//parameterized string print  as char set is stored in 0-based index 
               //format and we can access each char using index wheras if we want to 
               //print the whole string we can directly use cout<<s;
    cout<<s[len-1];
    
    
    
    
     return 0;

}