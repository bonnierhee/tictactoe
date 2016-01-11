#include <stdio.h>

//what is the board?
int board[3][3];

//prototypes
void initialisation(void);
void draw(void);
int win(char marker);

int main(int argc, char* argv[])
{
  //print out instructions for player
  printf("Welcome to tictactoe! To play, enter the number on the board you would like to replace with your marker!\n");
  //create board
  initialisation();

  //print out board in current state
  draw();

  //while this game is running
  while (1)
  {
    //ask for first player input
    printf("Player 1: ");
    int player_1;
    scanf("%d", &player_1);
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j<3; j++)
      {
        if (board[i][j] == player_1)
        {
          //place the marker
          board[i][j] = 'x' - '0';
        }
      }
    }
    //check for win
    //if win, terminate program
    if (win('x' - '0'))
    {
      break;
    }
    //print updated board
    draw();
    //ask for second player input
    printf("Player 2: ");
    int player_2;
    scanf("%d", &player_2);
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j<3; j++)
      {
        if (board[i][j] == player_2)
        {
          //place the marker
          board[i][j] = 'o' - '0';
        }
      }
    }
    //check for win
    //if win, terminate program
    //print updated board
    draw();
  }
}

//initialise board
void initialisation(void)
{
  int k = 1;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      board[i][j] = k;
      k++;
    }
  }
}

//draw board in current state
void draw(void)
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%c", board[i][j] + '0');
      if (j == 2)
      {
        printf("\n");
      }
    }
  }
}

//check if there is a winner
int win(char marker)
{
  if (board[0][0] == marker && board[0][1] == marker && board[0][2] == marker)
  {
    //yayyyyyy u win
    printf("Yay you win!");
    return 1;;
  }
  else if (board[1][0] == marker && board[1][1] == marker && board[1][2] == marker)
  {
    printf("Yay you win!");
    return 1;;
  }
  else if (board[2][0] == marker && board[2][1] == marker && board[2][2] == marker)
  {
    printf("Yay you win!");
    return 1;;
  }
  else if (board[0][0] == marker && board[1][0] == marker && board[2][0] == marker)
  {
    printf("Yay you win!");
    return 1;;
  }
  else if (board[0][1] == marker && board[1][1] == marker && board[2][1] == marker)
  {
    printf("Yay you win!");
    return 1;;
  }
  else if (board[0][0] == marker && board[1][1] == marker && board[2][2] == marker)
  {
    printf("Yay you win!");
    return 1;;
  }
  else if (board[0][2] == marker && board[1][1] == marker && board[2][0] == marker)
  {
    printf("Yay you win!");
    return 1;;
  }
}
