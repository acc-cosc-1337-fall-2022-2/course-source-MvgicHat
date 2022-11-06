//main
#include "tic_tac_toe.h"


int main() 
{
	TicTacToe game;
	string winner;
	string first_player;
	char end = 'N';
	int position;
	cout << "Tic-Tac-Toe Time!\n";
	cout << "Moves you can make:\n1|2|3\n4|5|6\n7|8|9\n";
	do {
		cout<<"Player 1 choose X or O: ";
		cin>>first_player;
		game.start_game(first_player);
		while (!game.game_over()) {
			game.display_board();
			cout << "Player "<<game.get_player()<<", select position 1-9: ";
			cin >> position;
			game.mark_board(position);
		}
		game.display_board();
		winner = game.get_winner();
		if (winner == "C") cout << "Tie game!";
		else cout<<"The winner is "<<winner<<"!";
		cout<<"\nExit program? (Y/N): ";
		cin>>end;
	} while(end != 'Y');
	return 0;
}