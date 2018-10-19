
#include "problem1.h"
#include <stdio.h>

int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  char board1[3][3] = {'o','x','o','x','x','o','x','o','o'};
  char result1 = check_win(board1);

  char board2[3][3] = {'o','o','o','o','x','x','o','o','x'};
  char result2 = check_win(board2);

  char board3[3][3] = {'o','o','x','o','a','x','o','o','x'};
  char result3 = check_win(board3);

  char board4[3][3] = {' ','o','x','o','x','x','o','x','o'};
  char result4 = check_win(board4);

  char board5[3][3] = {'x','o','x','o','x','x','o','x','o'};
  char result5 = check_win(board5);

  char board6[3][3] = {'x','o','x','o','x','o','o','o','x'};
  char result6 = check_win(board6);
 
  return(0);
}

