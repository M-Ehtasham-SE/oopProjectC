#include<iostream>
#include"game.h"
using namespace std;
int main() {
	Grid grid;

	player1 obj{2, 3};

	grid.grid(obj);
 

    while (true) {
        char input = getchar(); // Read input
        while (getchar() != '\n'); // Clear input 

        if (!grid.movePlayer(obj, input)) {
            break; // Exit on 'Q'
        }

        grid.grid(obj); 
    }

    
    cout << "Game Over!" << endl;

	return 0;
}