#include <iostream>
using namespace std;
//create the game board
char board [3][3]={
{'1','2','3'},
{'4','5','6'},
{'7','8','9'}
};//display the board
 void displayboard ()
{ cout<<"\n";
for (int i=0;i<3;i++)
{
    for (int j=0;j<3;j++)
{
    cout<<" "<<board[i][j]<<" ";
if (j<2)
    cout<<"|";
}
cout<<endl;
if (i<2)
   cout<<"---|---|---\n"<<endl;;
   }
}
// check for winner 
bool checkwinner ()
{
   // check in rows
   for (int i=0;i<3;i++)  
   {
    if (board [i][0]==board [i][1]&&board [i][1]==board [i][2])
   return true ;
    }
    //check in columns
    for (int j=0;j<3;j++)
    {
    if (board [0][j]==board [1][j]
    && board [1][j]==board [2][j])
   return  true;
   }
 // check in diagonals
    if (board[0][0]==board [1][1]&&
    board [1][1]==board[2][2])
   return  true;
    if (board[0][2]==board[1][1]&&
    board[1][1]==board[2][0])
    return true;

return false;
}
//Main function
int main()
{
int row,col;
int moves=0;
int choice;
char player='X';
cout<<"=====TIC TAC TOC GAME=====\n";
while (true)
{
    displayboard ();
    cout<<"\n player"<<player;
    cout<<":Enter position from 1 to 9 ";
    cin>>choice;
    //validate input
    if (choice<1||choice>9)
    {
cout<<"Invalid position ,Try again\n";
continue;
    }
    row =(choice-1)/3;
    col =(choice-1)%3;
    //check if position is empty 
if (board [row][col]=='X'||
   board [row][col]=='O')
{
cout<<"Positon is alrady occupied:Try again \n";
continue;
}
// place players symbol
board [row][col]=player;
moves++;
//check winner
if (checkwinner ())\
{
    displayboard ();
    cout<<"\n Player"<<player<<"win\n";
    break;
}
//check draw
if (moves==9)
{
    displayboard ();
cout<<"\nGame is a draw\n";
break;
}
//change player
if (player=='X')
player ='O';
else
  player ='X';
return 0;
}
}










    
