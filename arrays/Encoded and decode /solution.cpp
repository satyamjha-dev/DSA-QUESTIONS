#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string encode(vector<string>& strs) {

    string ans =" ";

    for (int i=0;i<strs.size();i++){

     
        ans+=(to_string(strs[i].length())+"#"+strs[i]);
        
    }

    return ans;
   
    }
// vector<string> decode(string s) {
//     vector<string> ans;
//     string temp="";
//     for(int i=0; i<s.length(); i++){

//         if(s[i] == '5#')
//     {
//         ans.push_back(temp);
//         temp = " ";
//     }
//     else
//     {
//         temp += s[i];
//     }
// }
//      return ans;

//     }

int main(){

    vector<string> strs = {"Hello","World"};
    string encoded_string = encode(strs);
    cout << encoded_string;
   
    // vector <string> decoded_string= decode(encoded_string);
    // for(string s : decoded_string){
    //     cout << s << " ";
    // }

    

}