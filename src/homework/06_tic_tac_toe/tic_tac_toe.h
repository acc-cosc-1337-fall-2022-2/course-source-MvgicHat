#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;

class TicTacToe{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    ///HW7 updates
    string get_winner();

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    vector<string> pegs{" "," "," "," "," "," "," "," "," "};
    ///HW7 updates
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    string winner;
};