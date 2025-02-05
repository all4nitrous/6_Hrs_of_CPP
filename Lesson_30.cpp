#include <iostream>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;
using std::string;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    srand(time(NULL));
    char player;
    char computer;

    
    player = getUserChoice();
    cout << "*************************" << endl;
    cout << "Your choice: " << endl;
    showChoice(player);
    cout << "*************************" << endl;

    computer = getComputerChoice();
    cout << "Computer's choice: " << endl;
    showChoice(computer);
    cout << "*************************" << endl;

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice() 
{
    char player;
    cout << "Rock-Paper-Scissors Game!" << endl;

    do {
        cout << "Choose one of the following" << endl;
        cout << "*************************" << endl;
        cout << "'r' for rock" << endl;
        cout << "'p' for paper" << endl;
        cout << "'s' for scissors" << endl;
        cin >> player;
    } while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice() 
{

    
    int num  = rand() % 3 + 1;

    switch(num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        default: return 'r';
    }
    
    return 0;
}

void showChoice(char choice) 
{

   switch(choice)
   {
    case 'r': cout << "Rock" << endl;
        break;
    case 'p': cout << "Paper" << endl;
        break;
    case 's': cout << "Scissors" << endl;
        break;
    default: cout << "Invalid choice!" << endl;
   }


}

void chooseWinner(char player, char computer) 
{
    switch(player) {
        case 'r': if(computer == 'r') 
        {
            cout << "It's a tie!" << endl;
        }
        else if(computer == 'p')
        {
            cout << "You lose!" << endl;
        }
        else 
        {
            cout << "You win!" << endl;
        }
        break;

        case 'p': if(computer == 'r') 
        {
            cout << "You Win!" << endl;
        }
        else if(computer == 'p')
        {
            cout << "It's a tie!" << endl;
        }
        else 
        {
            cout << "You lose!" << endl;
        }
        break;

        case 's': if(computer == 'r') 
        {
            cout << "You lose!" << endl;
        }
        else if(computer == 'p')
        {
            cout << "You win!" << endl;
        }
        else 
        {
            cout << "It's a tie!" << endl;
        }
        break;
    }
    
}