#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void groupanagram(vector<string> strs){

    unordered_map<string, vector<string>> mp;
    for(int i=0;i<strs.size();i++){
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        mp[temp].push_back(strs[i]);
    }

    for(auto it : mp)
{
    for(string s : it.second)
    {
        cout << s << " ";
    }

    cout << endl;
}


  

    
    

}

int main()
{
    vector<string> strs = {
        "act",
        "pots",
        "tops",
        "cat",
        "stop",
        "hat"
    };

    groupanagram(strs);

    
}