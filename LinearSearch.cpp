#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int n,key;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    } 

    cout << "Enter the number to find :";
    cin  >> key;
    int count = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout << "The key is present at :" << i+1 << " location.";
            count = 1;
        }
    }

    if(count==1){
        cout << "Number not present";
    }

}
