

//!valid anagram
//!brute force approach
// #include <iostream>
// using namespace std;

// void validanagram(string s1,string s2){
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     if(s1==s2){
//         cout << "valid anagram";

//     }else{
//         cout << "not a valid anagram";
//     }

// }


// int main(){
//     string s1,s2;
//     cout << "Enter the first string";
//     cin >> s1;
//     cout << "Enter the second string";
//     cin >> s2;
//     validanagram(s1,s2);




    



// }

//!time complexity = O(n log n)
//!space complexity =O(1)


//!optimal solution
#include <iostream>
#include <unordered_map>
using namespace std;

bool validAnagram(string s1, string s2) {
    if(s1.size() != s2.size()){
        return false;
    }

    unordered_map<char, int> freq;

    // count s1
    for(char c : s1){
        freq[c]++;
    }

    // subtract using s2
    for(char c : s2){
        freq[c]--;
        if(freq[c] < 0){
            return false;
        }
    }

    return true;
}

int main(){
    string s1 = "listen";
    string s2 = "silent";

    if(validAnagram(s1, s2)){
        cout << "Valid Anagram";
    } else {
        cout << "Not Valid";
    }
}

//!time complexity =O(n)
//!space complexity =O(n)