
//!two sum brute force approach

// #include <iostream>
// using namespace std;

// void checktwosum(int arr[],int n, int a){

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==a){
//                 cout << i << " " << j << endl;
//             }

//         }
//     }
//     cout << "not present in the array";

// }


// int main(){
//     int arr[] ={3,4,5,6};
//     int a;
//     int n=4;
//     cout << "Enter target element";
//     cin >> a;

//     checktwosum(arr,n,a);

// }

//!time complexity O(n^2)
//!space complexity O(1)

//? optimal or better approach 

#include <iostream>
#include <unordered_map>
using namespace std;

void checktwosum(int arr[], int n, int target){
    unordered_map<int,int> mpp;

    for(int i = 0; i < n; i++){
        int p = arr[i];
        int more = target - p;

        if(mpp.find(more) != mpp.end()){
            cout << mpp[more] << " " << i << endl;
            return;
        }

        mpp[arr[i]] = i;
    }

    cout << -1 << " " << -1;
}

int main(){
    int arr[] = {3,4,5,6};
    int a;
    int n = 4;

    cout << "Enter target element: ";
    cin >> a;

    checktwosum(arr, n, a);
}

