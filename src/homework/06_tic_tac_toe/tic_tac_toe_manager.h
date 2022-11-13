#include "tic_tac_toe.h"

#ifndef TicTacToeManager_H
#define TicTacToeManager_H

class TicTacToeManager{

friend ostream& operator<<(ostream& out, const TicTacToeManager& manager);

public:
    void get_winner_total(int& x, int& o, int& t);
    void save_game(TicTacToe b);

private:
    vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);
};
#endif