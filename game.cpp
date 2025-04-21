#include<iostream>
#include"game.h"
#include <cstdlib>
using namespace std;


void Grid::grid(player1& obj) {
  
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (obj.p1 == i && obj.p2 == j) {
                cout << "|P| "; // Player position
            }
            else {
                cout << "|_| "; 
            }
        }
        cout << endl;
    }
    cout << "Use WASD to move, Q to quit." << endl;

}
bool Grid::movePlayer(player1& obj, char input) {
    int newP1 = obj.p1;
    int newP2 = obj.p2;

    // Update position based on input
    if (input == 'w' || input == 'W')
    {
        newP1--;
    }// Move up
    else if (input == 's' || input == 'S')
    {
        newP1++; // Move down
    }
    else if (input == 'a' || input == 'A')
    {
        newP2--; // Move left= left

    }
    else if (input == 'd' || input == 'D')
    {
        newP2++; // Move right
    }
    else if (input == 'q' || input == 'Q')
    {
        return false; // Quit
    }
    // Check boundaries
    if (newP1 >= 0 && newP1 < row && newP2 >= 0 && newP2 < col) {
        obj.p1 = newP1; // Update player position
        obj.p2 = newP2;
    }

    return true; // Continue game
}