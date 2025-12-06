#include<iostream>
using namespace std;
void print1(int n){
    for(int i =1 ; i<n ; i++){ //for loop for rows
        for(int j= 1 ; j<=i ; j++){ //for loop for columns
            cout<<i<<" " ; //print i instead of *
        }
       cout<<  endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++ ){
        int n;
        cin >> n;
        print1(n);
    }

}