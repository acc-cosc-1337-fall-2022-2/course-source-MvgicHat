#include "tic_tac_toe_manager.h"

ostream& operator << (ostream& out, const TicTacToeManager& manager){
    for(int i = 0; i < manager.games.size(); i++){
        out << manager.games[i] << "\n";
    }
    cout<<"X wins: "<<manager.x_win<<"\n";
    cout<<"O wins: "<<manager.o_win<<"\n";
    cout<<"(Lame) Ties: "<<manager.ties<<"\n";
    return out;
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t){
    o = o_win;
    x = x_win;
    t = ties;
}

void TicTacToeManager::save_game(TicTacToe b){
    games.push_back(b);
    string winner = b.get_winner();
    update_winner_count(winner);
}

void TicTacToeManager::update_winner_count(string winner){
    if (winner == "X"){
        x_win += 1;
    }
    else if (winner == "O"){
        o_win += 1;
    }
    else{
        ties += 1;
    }
}
