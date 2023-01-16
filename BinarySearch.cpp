#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }

    int num;
    cin >> num;

    // Binary Search
    int count = 0;
    int s=0;
    int e=n;

    while (s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==num){
            cout << "Number is present at :" << mid + 1 << " position. \n";
            count = 1;
            return 0;
        }

        else if (arr[mid] > num){
            e = mid - 1;
        }

        else{
            s = mid + 1;
        }

    }

    if (count == 0){
        cout << "Number doesn't exist in here. \n";
    }

}