
#include "problem1.h"
#include <stdio.h>
#include <stdbool.h>

char check_win(char board[3][3])
{

  char player1 = 'o';
  char player2 = 'x';
  int row,col;
  
  // full is true indicates the board is fully occupied
  bool full = true;
  
  // count turns of player1 and player2
  int player1Turn = 0;
  int player2Turn = 0;
  
  for (row = 0;row < 3;row++){
    for (col = 0;col < 3;col++){
      switch (board[row][col])
	{
	case ' ':
	  full = false;
	  break;
	case 'o':
	  player1Turn++;
	  break;
	case 'x':
	  player2Turn++;
	  break;
	  // invalid characters
	default:
	  return ('0');
	}
    }
  }

  // The difference between the turns of two players should be less or equal to 1
  if (player1Turn - player2Turn > 1 || player2Turn - player1Turn >1)
    return ('0');

  // Check whether there exists a row of 3 for one player horizontally
  for (row = 0;row < 3;row++){
    if (board[row][0] == board[row][1] && board[row][1] == board[row][2])
      return board[row][1];
  }

  // Check whether there exists a row of 3 for one player vertically
  for (col = 0;col < 3;col++){
    if (board[0][col] == board[1][col] && board[1][col] == board[2][col])
      return board[0][col];
  }

  // Check whether there exists a row of 3 for one player diagonally
  // left-up to right-down
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    return board[0][0];
  
  // right-up to left-down
  if (board[2][0] == board[1][1] && board[1][1] == board[2][0])
    return board[2][0];

  // if all spaces are filled without winner appearing (cat's game)
  if (full)
    return ('.');
  else
    // the game is still going
    return(' '); 
}

