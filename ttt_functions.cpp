#include <iostream>
#include <vector>
#include "ttt.hpp"

std::string gridValue[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
bool winner_is_player1 = true;
bool winner_is_player2 = true;
int input, input2;
bool Bool = true;

void check_end() {




// to check who won, if the game has ended

   if (gridValue[0] == "O" && gridValue[1] == "O" && gridValue[2] == "O") {

        winner_is_player2 = false;
      }
  if (gridValue[0] == "O" && gridValue[4] == "O" && gridValue[8] == "O") {

       winner_is_player2 = false;
     }
  if (gridValue[0] == "O" && gridValue[3] == "O" && gridValue[6] == "O") {

       winner_is_player2 = false;
     }
  if (gridValue[1] == "O" && gridValue[4] == "O" && gridValue[7] == "O") {

       winner_is_player2 = false;
     }
  if (gridValue[3] == "O" && gridValue[4] == "O" && gridValue[5] == "O") {

       winner_is_player2 = false;
     }
  if (gridValue[2] == "O" && gridValue[4] == "O" && gridValue[6] == "O") {

       winner_is_player2 = false;
     }
  if (gridValue[2] == "O" && gridValue[5] == "O" && gridValue[8] == "O") {

       winner_is_player2 = false;
     }
  if (gridValue[6] == "O" && gridValue[7] == "O" && gridValue[8] == "O") {

       winner_is_player2 = false;
     }


  // below is to check if player 2 has won


  if (gridValue[0] == "X" && gridValue[1] == "X" && gridValue[2] == "X") {

       winner_is_player1 = false;
     }
   if (gridValue[0] == "X" && gridValue[4] == "X" && gridValue[8] == "X") {

      winner_is_player1 = false;
    }
  if (gridValue[0] == "X" && gridValue[3] == "X" && gridValue[6] == "X") {

      winner_is_player1 = false;
  }
   if (gridValue[1] == "X" && gridValue[4] == "X" && gridValue[7] == "X") {

      winner_is_player1 = false;
    }
  if (gridValue[3] == "X" && gridValue[4] == "X" && gridValue[5] == "X") {

      winner_is_player1 = false;
    }
  if (gridValue[2] == "X" && gridValue[4] == "X" && gridValue[6] == "X") {

      winner_is_player1 = false;
    }
  if (gridValue[2] == "X" && gridValue[5] == "X" && gridValue[8] == "X") {

      winner_is_player1 = false;
    }
  if (gridValue[6] == "X" && gridValue[7] == "X" && gridValue[8] == "X") {

      winner_is_player1 = false;
    }

    if (winner_is_player1 == false) { std::cout << "winner is player 2\n\n";}
    if (winner_is_player2 == false) { std::cout << "winner is player 1\n\n";}

}


// problems: condition for tie. not allowing more than one value for a particular gridValue.


void greet() {

  std::cout << "\n\n       ## WELCOME TO TIC TAC TOE ##";
  std::cout << "\n\n  Instructions: First player should use 'O' and second player should use 'X'\n\n";
  std::cout << "  Type the number to choose the particular place in the matrix.\n\n\n\n";


  std::cout << "     |     |     \n";
  std::cout << "  " << "1" << "  |  " << "2" << "  |  " << "3" << "  \n";

  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";

  std::cout << "  " << "4" << "  |  " << "5" << "  |  " << "6" << "  \n";

  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";

  std::cout << "  " << "7" << "  |  " << "8" << "  |  " << "9" << "  \n";

  std::cout << "     |     |     \n\n\n\n";


}


void draw() {


  std::cout << "     |     |     \n";
  std::cout << "  " << gridValue[0] << "  |  " << gridValue[1] << "  |  " << gridValue[2] << "  \n";

  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";

  std::cout << "  " << gridValue[3] << "  |  " << gridValue[4] << "  |  " << gridValue[5] << "  \n";

  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";

  std::cout << "  " << gridValue[6] << "  |  " << gridValue[7] << "  |  " << gridValue[8] << "  \n";

  std::cout << "     |     |     \n\n\n\n";


}

void mainF() {

for (int i=0; i<9; i++) {

 if (Bool) {
  std::cout << "Player 1: ";
  std::cin >> input;

  while (input > 9 || input < 1) {
    std::cout << "\n invalid input. try again.\n\n";
    std::cin >> input;
  }

  while (gridValue[input-1] != " ") {
    std::cout << "space occupied, try again.\n\n";
    std::cin >> input;
  }

  gridValue[input-1] = "O";
  draw();
  check_end();
}
 else {
  if (winner_is_player1 == true && winner_is_player2 == true) {

  std::cout << "Player 2: ";
  std::cin >> input2;


  while (input2 > 9 || input2 < 1) {
    std::cout << "\n invalid input. try again.\n\n";
    std::cin >> input2;
  }

  while (gridValue[input2-1] != " ") {
    std::cout << "space occupied, try again.\n\n";
    std::cin >> input2;
  }
  gridValue[input2-1] =  "X";
  draw();
  check_end();
      }
    }

Bool = !Bool;
     }

     if (winner_is_player1 == true && winner_is_player2 == true) {
       std::cout << "\n game was a tie\n";
     }
    }
