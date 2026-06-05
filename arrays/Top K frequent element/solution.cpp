// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector <int> nums ={1,2,2,3,3,3};
//     int k=2;
    
//     for(int i=0;i<6;i++){
//         int temp=nums[i];
//         int c=0;
//         vector <int> count;
        
//         for(int j=i+1;j<6;j++){
//             if(nums[j]==temp){
//                 c++;
//                 count.push_back(c);
//             }
            



//         }
//     for(int i=0;i<count.size();i++){
//         cout << count[i] << " ";

//     }



//     }

// }

//! Solution with the hasmap

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int> nums ={7,7};
    int k=2;
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }

    vector <int> newar;
    for(auto it: freq){
        newar.push_back(it.second);
    }

    sort(newar.begin(), newar.end(), greater<int>()); //? correct way to sort an array in decending order

    
  
    for(int i=0;i<k;i++){  
        cout << newar[i] << " ";
    }
  
    
 

}



