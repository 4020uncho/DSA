//reverse pyramid pattern
#include<iostream>
using namespace std;
void print1(int n){
    for(int i =0 ; i<n ; i++){ 
        //space
        for(int j=0;j<n-i-1;j++){
            cout<< " ";
        }
        //stars
        for(int j=0;j<2+i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<< " ";
        }
        cout<<endl;
    }   
}
void print8(int n){
    for(int i=0;i<=n;i++){
        //space
        for(int j=0;j<=i;j++){
            cout<< " ";
        }
        //stars
        for(int j=0; j<2*n -(2*i +1); j++){ //changed condition to print reverse pyramid 
            cout<<"*";
        }
        //space
        for(int j=0;j<=i;j++){
            cout<< " ";
        }
        cout<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){ //test cases
        int n;
        cin>>n;
        print1(n);
        print8(n);
    }
}