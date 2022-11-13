//main
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"


int main() 
{
	TicTacToe game;
	TicTacToeManager manager;
	string winner;
	string first_player;
	
	char end;
	int position;
	cout << "Tic-Tac-Toe Time!\n";
	cout << "Moves you can make:\n1|2|3\n4|5|6\n7|8|9\n";
	do {
		cout<<"Player 1 choose X or O: ";
		cin>>first_player;
		game.start_game(first_player);
		while (!game.game_over()) {
			cout<<game;
			cin>>game;
		}
		cout<<game;

		manager.save_game(game);
		int x, o, t;
		manager.get_winner_total(x, o, t);
		cout<<"\nX wins: "<<x<<"\n";
    	cout<<"O wins: "<<o<<"\n";
    	cout<<"(Lame) Ties: "<<t<<"\n";

		winner = game.get_winner();
		if (winner == "C") cout << "Tie game!";
		else cout<<"The winner is "<<winner<<"!";
		cout<<"\nExit program? (Y/N): ";
		cin>>end;
	} while(end != 'Y');
	cout<<manager;
	return 0;
}