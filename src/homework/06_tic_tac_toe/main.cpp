#include <iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout;
using std::cin;
using std::make_unique;

int main()
{
    unique_ptr<TicTacToe> game;
    TicTacToeManager manager;

    string first_player;
    string select;

    do{
        string game_selection;
        do
        {
            cout << "Enter 3 for classic TicTacToe!\nEnter 4 for 4x4 TicTacToe madness!\n";
            cin >> game_selection;
        }
        while(game_selection != "3" && game_selection != "4");

        if (game_selection == "3")
        {
            game = make_unique<TicTacToe3>();
        }
        else
        {
            game = make_unique<TicTacToe4>();
        }

        cout << "Player One: Choose X or O\n";
        cin >> first_player;

        if (first_player == "X" || first_player == "O")
        {
            game->start_game(first_player);

            do
            {
                cout << *game;
                cin >> *game;
            }
            while (!game->game_over());

            manager.save_game(game);

            int x, o, t;
            manager.get_winner_totals(x,o,t);
            cout << "\nX Wins: " << x << "\n";
            cout << "O Wins: " << o << "\n";
            cout << "Ties: " << t << "\n";

            cout << "Would you like to play again? (Y/N)\n";
            cin >> select;
        }
        else
        {
            cout << "Invalid selection.";
        }
    }while(select != "N");
    cout<<manager;
    return 0;
}