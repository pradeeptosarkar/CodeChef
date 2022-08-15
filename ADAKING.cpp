#include <bits/stdc++.h>
using namespace std;

void construct(int k)
{
    char board[9][9];
    board[1][1]='O';
    k--;
    
    for(int row=1;row<9;row++)
    {
        for(int column=1;column<9;column++)
        {
                if(row==1 && column==1)
                continue;
                if(k)
                {
                    board[row][column]='.';
                    k--;
                }
                else
                {
                    board[row][column]='X';
                }
        }
        
    }
        for(int row=1;row<9;row++)
        {
            for(int column=1;column<9;column++)
            {
                cout<<board[row][column];
            }
            cout<<endl;
        }
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        
        construct(k);
    }
}
