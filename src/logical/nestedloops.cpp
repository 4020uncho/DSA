#include<iostream>
using namespace std;
void print1(int n){
    for(int i =0 ; i<n ; i++){
        for( int j= 0 ; j<=i ; j++){ //changed condition to j<=i
            cout<<"* ";
        }
       cout<<  endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++ ){ //loop for test cases
        int n;
        cin >> n;
        print1(n);
    }

}