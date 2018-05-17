/*
p16RockPaperScissors.cpp

Description: program that plays rock, paper, scissors, with the user and shows who won and who didn't.
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{

int iseed = time(NULL) ; ////need this for p2 randomization
srand(iseed);////////////////////"                   "

int rock = 1; ///DECLARE/INITIALIZE
int paper = 2;
int scissors = 3;

int p1;
int p2 = 1 + rand()%3 ; /// used for rand # between 1 - 3

cout<<"Enter Rock(1), Paper(2), or Scissors(3): " ;
cin>> p1 ;                          ////////////////PROMPT

cout<<"Player 1: " << p1 << endl ; /// SHOW WHAT EACH PLAYER GOT
cout << "Player 2: " << p2 << endl ;


///////TIE CONDITION
if ((p1 == 1 && p2 == 1 || p1 == 2 && p2 == 2 || p1 == 3 && p2 == 3)){
    cout<<"Result: Tie!"<<endl ;
}
//////////////////PLAYER 1 CONDITONS FOR WINNING

else if ((p1 == 1 && p2 == 3)){
    cout<<"Result: Player 1 wins, Rock breaks Scissors!"<<endl;
}
else if ((p1 == 2 && p2 == 1)){
    cout<<"Result: Player 1 wins, Paper covers Rock!"<<endl ;
}
else if ((p1 == 3 && p2 == 2)){
    cout<<"Result: Player 1 wins, Scissors cut Paper!"<<endl;
}

///////////////////PLAYER 2 CONDITIONS FOR WINNING
else if ((p1 == 3 && p2 == 1)){
    cout<<"Result: Player 2 wins, Rock breaks Scissors!"<<endl;
}
else if ((p1 == 1 && p2 == 2)){
    cout<<"Result: Player 2 wins, Paper covers Rock!"<<endl;
}
else if ((p1 == 2 && p2 == 3)){
    cout<<"Result: Player 2 wins, Scissors cut Paper!"<<endl;
}

else {
    cout<<"No one wins"  ;
}

return 0 ;
}
/*
=============================SAMPLE RUN==========================
Enter Rock(1), Paper(2), or Scissors(3): 3
Player 1: 3
Player 2: 2
Result: Player 1 wins, Scissors cut Paper!

Process returned 0 (0x0)   execution time : 1.623 s
Press any key to continue.
-------------------------------------------------------------
Enter Rock(1), Paper(2), or Scissors(3): 2
Player 1: 2
Player 2: 2
Result: Tie!

Process returned 0 (0x0)   execution time : 0.746 s
Press any key to continue.
---------------------------------------------------------------
Enter Rock(1), Paper(2), or Scissors(3): 1
Player 1: 1
Player 2: 2
Result: Player 2 wins, Paper covers Rock!

Process returned 0 (0x0)   execution time : 0.677 s
Press any key to continue.
--------------------------------------------------
Enter Rock(1), Paper(2), or Scissors(3): 1
Player 1: 1
Player 2: 3
Result: Player 1 wins, Rock breaks Scissors!

Process returned 0 (0x0)   execution time : 0.846 s
Press any key to continue.
----------------------------------------------------------
Enter Rock(1), Paper(2), or Scissors(3): 2
Player 1: 2
Player 2: 1
Result: Player 1 wins, Paper covers Rock!

Process returned 0 (0x0)   execution time : 1.605 s
Press any key to continue.
*/
