//cpp
#include "tic_tac_toe.h"

ostream& operator << (ostream& out, const TicTacToe& game){
    for(int i=0; i < 9; i++)
    {
        out << game.pegs[i];
        if(i == 2 || i == 5 || i ==8){
            out<<'\n';
        }
        else{
            out<<"|";
        }
    }
    return out;
}

istream& operator >> (istream& in, TicTacToe& game){
        int position;
    	cout << "Player "<<game.get_player()<<", select position 1-9: ";
		in >> position;
		game.mark_board(position);
        return in;
}

bool TicTacToe::game_over(){
    if(check_column_win() || check_row_win() || check_diagonal_win()){
        set_winner();
        return true;
    }
    else if (check_board_full()){
        winner = "C";
        return true;
    }
    else{
        return false;
    }
}

void TicTacToe::start_game(string first_player){
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position){
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const{
    return player;
}

void TicTacToe::set_next_player(){
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full(){
    bool doneski;
    if(count (pegs.begin(), pegs.end(), " "))
    {
        doneski = false;
    }
    else{
        doneski = true;
    }
    return doneski;
}

void TicTacToe::clear_board(){
    for(int i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    };
}

string TicTacToe::get_winner(){
    return winner;
}

bool TicTacToe::check_column_win()
{
    bool doneski;
    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        doneski = true;
    }
    else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        doneski = true;
    }
    else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        doneski = true;
    }
    else if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        doneski = true;
    }
    else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        doneski = true;
    }
    else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        doneski = true;
    }
    else
        doneski = false;

    return doneski;
}

bool TicTacToe::check_row_win()
{
    bool doneski;
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        doneski = true;
    }
    else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        doneski = true;
    }
    else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        doneski = true;
    }
    else if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        doneski = true;
    }
    else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        doneski = true;
    }
    else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        doneski = true;
    }
    else
        doneski = false;

    return doneski;
}

bool TicTacToe::check_diagonal_win()
{
    bool doneski;
    if(pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ")
    {
        doneski = true;
    }
    else if(pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
    {
        doneski = true;
    }
    else
    {
        doneski = false;
    }

    return doneski;
}
void TicTacToe::set_winner(){
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }    
}