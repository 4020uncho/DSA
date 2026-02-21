#include<iostream>
#include<vector>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0; i<=n-2;i++){
        int mini = 1;
        for(int j=i+1; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp =arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

}
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    cout<<"Sorted array: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}