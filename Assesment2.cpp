//Write a program to demonstrate a Rock Paper Scissor Game
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int userScore = 0;
int computerScore = 0;

void gameStart(int TotalRound, const string& name) {

    cout<<endl<<"Welcome to Stone Paper Scissor Game.\n";

    for (int round = 0; round < TotalRound; ++round) {

        cout << "\nRound: " << round + 1 << " / " << TotalRound << endl;

        cout << endl << "* " << name << "'s Score = " << userScore << endl;
        cout << "* Computer Score = " << computerScore << endl;

        int userChoice, computerChoice;
        cout <<endl<< "1) Rock\n2) Paper\n3) Scissors" << endl;
        cout << endl << "-> Select your choice: ";
        cin >> userChoice;

        computerChoice = rand() % 3 + 1;

        cout << endl << name << "'s choice is: " << userChoice << endl;
        cout << "Computer's choice is: " << computerChoice << endl;

        if (userChoice == computerChoice) {
            cout << "\nDraw!\n";
        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) 
                {
                    cout << "\nCongratulations! " << name << " wins this round.\n" << endl;
                    userScore++;
                } 
        else {
                     cout << "\nOh! Computer won the round!\n" << endl;
                     computerScore++;
                }
    }
}

int main() {
    srand(time(nullptr));
    string name;
    int TotalRound;

    cout << "Enter your name: ";
    cin >> name;
    cout << endl << name << ", how many rounds do you want to play: ";
    cin >> TotalRound;

    gameStart(TotalRound, name);

    cout << "\nGame is drawn.\n";
    return 0;
}
