
//!brute force approach

// #include <iostream>
// using namespace std;

// bool containsDuplicate(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[] = {1, 2, 5, 5, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);\
//     bool result  = containsDuplicate(arr, n);
//     if(result){
//         cout << "Duplicate found." << endl;
//     } else {
//         cout << "No duplicate found." << endl;
//     }
    
    
// }

//!time complexity: O(n^2)
//!space complexity: O(1)




//!optimized approach
//!using unordered_map to count frequency of each element

// #include <iostream>
// using namespace std;



// int main(){
//     int arr[] = {1, 2, 5, 5, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     unordered_map<int, int> freq;
//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }
//     for(auto it : freq){
//         if(it.second > 1){
//             cout << "Duplicate found: " << it.first << endl;
//             return 0;
//         }
//     }
//     cout << "No duplicate found." << endl;
    
    
// }

//!time complexity: O(n)
//!space complexity: O(n)


//!optimized approach-using hash set to track seen elements
// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main(){
//     int arr[] = {1, 2, 5, 5, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     unordered_set<int> seen;

//     for (int i = 0; i < n; i++) {
//         if (seen.count(arr[i]) > 0) {
//             cout << "Duplicate found: " << arr[i] << endl;
//             return 0;   
//         }
//         seen.insert(arr[i]);  // ✅ INSERT INSIDE LOOP
//     }

//     cout << "No duplicate found." << endl;
// }
