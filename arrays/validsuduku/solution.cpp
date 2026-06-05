#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board)
{
    for(int i=0;i<9;i++){
        unordered_map<int,int> mp;
        for(int j=0;j<9;j++){
            if(board[i][j] == '.'){
                continue;
            }if(mp.find(board[i][j]) != mp.end()){
                return false;
                      
            }
            mp[board[i][j]] = 1;          
        }
        
    }

    for(int i=0;i<9;i++){
        unordered_map<int,int> mp;
        for(int j=0;j<9;j++){
            if(board[j][i] == '.'){
                continue;
            }if(mp.find(board[j][i]) != mp.end()){
                return false;
                      
            }
            mp[board[j][i]] = 1;          
        }
        
    }
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            unordered_map<int,int> mp;
            for(int k=i;k<i+3;k++){
                for(int l=j;l<j+3;l++){
                    if(board[k][l] == '.'){
                continue;
            }if(mp.find(board[k][l]) != mp.end()){
                return false;
                      
            }
            mp[board[k][l]] = 1; 
                }
            }

        }
    }

    
    
    
    

    return true;
}

int main()
{
    vector<vector<char>> board =
    {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},

        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},

        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    bool ans = isValidSudoku(board);

    if(ans)
    {
        cout << "Valid Sudoku" << endl;
    }
    else
    {
        cout << "Invalid Sudoku" << endl;
    }

    return 0;
}