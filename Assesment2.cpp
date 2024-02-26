#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main(){
    string name;
    char playAgain;
    int TotalRound,round=0;
    int userChoice , computerChoice;
    int userScore = 0 , computerScore = 0;
    
    cout<<"Enter your name: ";
    cin>>name;

    cout<<endl<<name<<" , how many rounds you want to play : ";
    cin>>TotalRound;

    cout<<endl<<"Welcome to Stone Paper Scissor Game.\n";
do{
    cout << "\nRound: " << round+1 << " / "<<TotalRound<<endl;

    cout<<endl<<"* "<<name<<"'s"<<" Score = "<<userScore<<endl;
    cout<<"* "<<"computer"<<" Score = "<<computerScore<<endl;

    cout <<endl<< "1) Rock\n2) Paper\n3) Scissors" << endl;
    cout <<endl<< "-> Select your choice : ";
    cin >> userChoice;

    computerChoice = rand() % 3 + 1;

    cout<<endl<<name<<" choice is : "<<userChoice<<endl;
    cout<<"Computer choice is : "<<computerChoice<<endl;
    
    if(userChoice==computerChoice){
        cout<<"\nDraw!\n";
    }
    else if((userChoice == 1 & computerChoice == 3)|| 
            (userChoice == 2 & computerChoice == 1) || 
            (userChoice == 3 & computerChoice == 2))
            {
                cout<<"\nCongratulation! "<<name<<" win this round.\n"<<endl;
                userScore++;
            }
            else{
                cout<<"\nOh! Computer won the Game!\n"<<endl;
                computerScore++;
            }

            round++;
            
            // cout << "\nRound: " << userScore + computerScore + 1 << "/3\n";
            cout << "* "<<name<<"'s score = " << userScore << endl;
            cout << "* Computer score = " << computerScore << endl;

            if (round < TotalRound)
            {   cout << "\nPress any key to continue...";
                cin.ignore();
                cin.get();
            }
    }

            while (round < TotalRound);

            cout << "\nGame is drawn.\n";
    
}
 