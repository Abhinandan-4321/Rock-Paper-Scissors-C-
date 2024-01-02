#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main(){

    // this for ensuring that the random function always chooses a different number between 1 to 3
    srand(time(NULL));

    int player = 0;
    int computer = 0;

    cout << "Rock Paper Scissors" << endl;
    cout << "Choose 1 for Rock" << endl;
    cout << "Choose 2 for Paper" << endl;
    cout << "Choose 3 for Scissors" << endl;

    cin >> player;

    // condition for player choosing a number greater than 3
    if (player > 3) {
        cout << "Please choose a valid option!!" << endl;
        cout << "Start Again!!" << endl;
        return 1;
    }

    // conditions for player
    if (player == 1) {
        cout << "You chose Rock" << endl;
    }

    else if (player == 2) {
        cout << "You chose Paper" << endl;
    }
    else if (player == 3){
        cout << "You chose Scissors" << endl;
    }

    //random function for the computer
    computer = rand() % 3 + 1;
    
    // conditions for computer
    if (computer == 1) {
        cout << "Computer chose Rock" << endl;
    }
    else if (computer == 2) {
        cout << "Computer chose Paper" << endl;
    }
    else if (computer == 3){
        cout << "Computer chose Scissors" << endl;
    }
    
    //condition is if both player and computer chooses the same number
    if (player == computer) {
        cout << "It's a draw both chose the same!" << endl;
    }    

    // winning conditions if the player chooses 1
    if (player == 1) {
        if (computer == 2) {
            cout << "Computer wom the round!" << endl;
        }
        if (computer == 3) {
            cout << "You won the round!" << endl;
        }
    }

    // winning conditions if the player chooses 2
    else if (player == 2) {
        if (computer == 1) {
            cout << "You won the round!" << endl;
        }
        if (computer == 3) {
            cout << "Computer won the round!" << endl;
        }
    }

    // winning conditions if the player chooses 3
    else if (player == 3) {
        if (computer == 1) {
            cout << "Computer won the round!" << endl;
        }
        if (computer == 2) {
            cout << "You won the round!" << endl;
        }
    }

    return 0;
}