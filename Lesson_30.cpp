#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    char player;
    char computer;

    player = getUserChoice();


    return 0;
}

char getUserChoice() 
{
    char player;
    cout << "Rock-Paper-Scissors Game!" << endl;
    cout << "*************************" << endl;
    cout << "'r' for rock" << endl;
    cout << "'p' for paper" << endl;
    cout << "'s' for scissors" << endl;
    cin >> player;
    cout << "*************************" << endl;
    cout << player << endl;
    
    return 0;
}

char getComputerChoice() 
{
    
    return 0;
}

void showChoice(char choice) 
{

   
}

void chooseWinner(char player, char computer) 
{

    
}