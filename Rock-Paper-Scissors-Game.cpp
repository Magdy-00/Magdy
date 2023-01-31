#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    string player_choise;
    cout << "Choose Rock, Paper or Scissors" << endl;
    vector<string> options = {"Scissors", "Paper", "Rock"};
    char cont = 'y';
    while (cont == 'y' || cont == 'Y')
    {
        cout << "R for Rock, P for Paper and S for Scissors" << endl;
        cin >> player_choise;
        srand(time(0));
        int randomIndex = rand() % options.size(); // takes a random from the vector
        cout << "The PC has chosen " << options[randomIndex] << endl;
        if (options[randomIndex] == "Rock")
        {
            if (player_choise == "R" || player_choise == "r")
            {
                cout << "Tie" << endl;
            }
            else if (player_choise == "S" || player_choise == "s")
            {
                cout << "You lost" << endl;
            }
            else if (player_choise == "P" || player_choise == "p")
            {
                cout << "You won!" << endl;
            }
            else
            {
                cout << "Please choose a right option" << endl;
            }
        }
        else if (options[randomIndex] == "Paper")
        {
            if (player_choise == "P" || player_choise == "p")
            {
                cout << "Tie" << endl;
            }
            else if (player_choise == "S" || player_choise == "s")
            {
                cout << "You won!" << endl;
            }
            else if (player_choise == "R" || player_choise == "r")
            {
                cout << "You lost" << endl;
            }
            else
            {
                cout << "Please choose a right option" << endl;
            }
        }
        else if (options[randomIndex] == "Scissors")
        {
            if (player_choise == "S" || player_choise == "s")
            {
                cout << "Tie" << endl;
            }
            else if (player_choise == "P" || player_choise == "p")
            {
                cout << "You lost" << endl;
            }
            else if (player_choise == "R" || player_choise == "r")
            {
                cout << "You won!" << endl;
            }
            else
            {
                cout << "Please choose a right option" << endl;
            }
        }
        else
        {
            return 0;
        }
        cout << "Do you want to continue?" << endl
             << "y for yes and n for no" << endl;
        cin >> cont;
    }
    return 0;
}