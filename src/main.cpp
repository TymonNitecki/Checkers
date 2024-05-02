#include <iostream>
using namespace std;
#include <cstdlib>

void checkerboard() {
  string a1,b1,c1,d1,e1,f1;
  a1="●";
  b1="●";
  c1="●";
  d1="●";
  e1="●";
  f1="●";
  
  cout << "┌───┬───┬───┬───┬───┬───┐\n";
  cout << "│ "<<a1<<" │ "<<b1<<" │ " <<c1<<" │ "<<d1<<" │ "<<e1<<" │ "<<f1<<" │\n";
  cout << "├───┼───┼───┼───┼───┼───┤\n";
  cout << "│   │   │   │   │   │   │\n";
  cout << "├───┼───┼───┼───┼───┼───┤\n";
  cout << "│   │   │   │   │   │   │\n";
  cout << "├───┼───┼───┼───┼───┼───┤\n";
  cout << "│   │   │   │   │   │   │\n";
  cout << "├───┼───┼───┼───┼───┼───┤\n";
  cout << "│   │   │   │   │   │   │\n";
  cout << "├───┼───┼───┼───┼───┼───┤\n";
  cout << "│   │   │   │   │   │   │\n";
  cout << "└───┴───┴───┴───┴───┴───┘\n";

  cout << "     A   B   C   D   E   F\n";
  cout << "   ┌───┬───┬───┬───┬───┬───┐\n";
  cout << "1  │ ● │ ● │ ● │ ● │ ● │ ● │\n";
  cout << "   ├───┼───┼───┼───┼───┼───┤\n";
  cout << "2  │ ● │ ● │ ● │ ● │ ● │ ● │\n";
  cout << "   ├───┼───┼───┼───┼───┼───┤\n";
  cout << "3  │   │   │   │   │   │   │\n";
  cout << "   ├───┼───┼───┼───┼───┼───┤\n";
  cout << "4  │   │   │   │   │   │   │\n";
  cout << "   ├───┼───┼───┼───┼───┼───┤\n";
  cout << "5  │ o │ o │ o │ o │ o │ o │\n";
  cout << "   ├───┼───┼───┼───┼───┼───┤\n";
  cout << "6  │ o │ o │ o │ o │ o │ o │\n";
  cout << "   └───┴───┴───┴───┴───┴───┘\n";
}

void startingGUI() {
  cout << "Welcome To MiniCheckurs! \n";
  cout << "This is a shell based Checkers game with a 6x6 board! \n";
  cout << "The game is played by two players, each player has 12 pieces. (one can also play by themselves) \n";
}
  
string player1() {
    string solidInitialPosition;
    string solidFinalPosition;

    cout << "Enter the postion of a solid piece you want to move (e.g., a2): ";
    cin >> solidInitialPosition;
    cout << "Enter the position where the piece should be moved and is a viable move for that piece (e.g., b3): ";
    cin >> solidFinalPosition;
  return solidFinalPosition;
  return solidInitialPosition;
}

string player2() {
    string hollowInitialPosition;
    string hollowFinalPosition;

    cout << "Enter the postion of a hollow piece you want to move (e.g., f5): ";
    cin >> hollowInitialPosition;
    cout << "Enter the position where the piece should be moved and is a viable move for that piece (e.g., e4): ";
    cin >> hollowFinalPosition;
  return hollowFinalPosition;
  return hollowInitialPosition;
}



int main() {
  startingGUI();
  string userInput;
  cout << "Press enter to continue...\n";
  getline(cin, userInput);
  if (userInput=="") {
    while (true){
      checkerboard();
      cout << "Player 1:\n";
      player1();
      checkerboard();
      cout << "\n";
      cout << "Player 2:\n"; 
      player2();
      
      
    
  }
  }


}
  


