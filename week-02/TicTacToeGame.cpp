#include <iostream>
#include <string>

using namespace std;

/**
 * Class: Tic_Tac_Toe
 * Purpose: Manages a 3x3 game board and win-loss status.
 */
class Tic_Tac_Toe {
private:
    int arr[3][3]; // 0 = empty, 1 = X, 2 = O

public:
    Tic_Tac_Toe() { ClearBoard(); }

    // Initializes or resets the board to empty state
    void ClearBoard() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) arr[i][j] = 0;
    }

    // Visualizes the 2D array as a grid for the console
    string To_string() {
        string s = "";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[i][j] == 0) s += ".";
                else s += (arr[i][j] == 1) ? "X" : "O";
                if (j < 2) s += " | ";
            }
            if (i < 2) s += "\n---------\n";
        }
        return s;
    }

    // Places a mark if the chosen coordinates are valid and empty
    bool move(int player, int r, int c) {
        if (r >= 0 && r < 3 && c >= 0 && c < 3 && arr[r][c] == 0) {
            arr[r][c] = player;
            return true;
        }
        return false;
    }

    // Checks rows, columns, and diagonals for a winner
    int gameStatus() {
        for (int i = 0; i < 3; i++) {
            // Horizontal check
            if (arr[i][0] != 0 && arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) return arr[i][0];
            // Vertical check
            if (arr[0][i] != 0 && arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]) return arr[0][i];
        }
        // Diagonal checks
        if (arr[0][0] != 0 && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) return arr[0][0];
        if (arr[0][2] != 0 && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) return arr[0][2];
        return 0; // Return 0 if no one has won yet
    }
};

int main() {
    Tic_Tac_Toe game;
    game.move(1, 1, 1); // Player 1 moves to center
    cout << game.To_string() << endl;
    return 0;
}