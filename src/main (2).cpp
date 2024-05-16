#include <iostream>
using namespace std;
#include <cstdlib>

void checkerboard() {
 
  string a1,b1,c1,d1,e1,f1,a2,b2,c2,d2,e2,f2,a3,b3,c3, d3, e3, f3, a4, b4, c4, d4, e4, f4, a5, b5, c5, d5, e5, f5, a6, b6, c6, d6, e6, f6;

  a1="●";
  b1="●";
  c1="●";
  d1="●";
  e1="●";
  f1="●";

  a2="●";
  b2="●";
  c2="●";
  d2="●";
  e2="●";
  f2="●";

  a3=" ";
  b3=" ";
  c3=" ";
  d3=" ";
  e3=" ";
  f3=" ";

  a4=" ";
  b4=" ";
  c4=" ";
  d4=" ";
  e4=" ";
  f4=" ";

  a5="o";
  b5="o";
  c5="o";
  d5="o";
  e5="o";
  f5="o";

  a6="o";
  b6="o";
  c6="o";
  d6="o";
  e6="o";
  f6="o";
  /*
    string checkerboardPositions[] = {a1, b1, c1, d1, e1, f1, a2, b2, c2, d2, e2, f2, a3, b3, c3, d3, e3, f3, a4, b4, c4, d4, e4, f4, a5, b5, c5, d5, e5, f5, a6, b6, c6, d6, e6, f6};
    
    for (int i = 0; i < 36; i++) {
        if (checkerboardPositions[i] == hollowInitialPosition) {
            checkerboardPositions[i] = " ";
        }
        if (checkerboardPositions[i] == hollowFinalPosition) {
            checkerboardPositions[i] = "o";
        }
    }
    
    a1 = checkerboardPositions[0];
    b1 = checkerboardPositions[1];
    c1 = checkerboardPositions[2];
    d1 = checkerboardPositions[3];
    e1 = checkerboardPositions[4];
    f1 = checkerboardPositions[5];

    a2 = checkerboardPositions[6];
    b2 = checkerboardPositions[7];
    c2 = checkerboardPositions[8];
    d2 = checkerboardPositions[9];
    e2 = checkerboardPositions[10];
    f2 = checkerboardPositions[11];

    a3 = checkerboardPositions[12];
    b3 = checkerboardPositions[13];
    c3 = checkerboardPositions[14];
    d3 = checkerboardPositions[15];
    e3 = checkerboardPositions[16];
    f3 = checkerboardPositions[17];

    a4 = checkerboardPositions[18];
    b4 = checkerboardPositions[19];
    c4 = checkerboardPositions[20];
    d4 = checkerboardPositions[21];
    e4 = checkerboardPositions[22];
    f4 = checkerboardPositions[23];

    a5 = checkerboardPositions[24];
    b5 = checkerboardPositions[25];
    c5 = checkerboardPositions[26];
    d5 = checkerboardPositions[27];
    e5 = checkerboardPositions[28];
    f5 = checkerboardPositions[29];

    a6 = checkerboardPositions[30];
    b6 = checkerboardPositions[31];
    c6 = checkerboardPositions[32];
    d6 = checkerboardPositions[33];
    e6 = checkerboardPositions[34];
    f6 = checkerboardPositions[35];
  
  */
  cout << "     A   B   C   D   E   F\n";
    cout << "   ┌───┬───┬───┬───┬───┬───┐\n";
    cout << "1  │ "<<a1<<" │ "<<b1<<" │ " <<c1<<" │ "<<d1<<" │ "<<e1<<" │ "<<f1<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "2  │ "<<a2<<" │ "<<b2<<" │ " <<c2<<" │ "<<d2<<" │ "<<e2<<" │ "<<f2<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "3  │ "<<a3<<" │ "<<b3<<" │ " <<c3<<" │ "<<d3<<" │ "<<e3<<" │ "<<f3<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "4  │ "<<a4<<" │ "<<b4<<" │ " <<c4<<" │ "<<d4<<" │ "<<e4<<" │ "<<f4<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "5  │ "<<a5<<" │ "<<b5<<" │ " <<c5<<" │ "<<d5<<" │ "<<e5<<" │ "<<f5<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "6  │ "<<a6<<" │ "<<b6<<" │ " <<c6<<" │ "<<d6<<" │ "<<e6<<" │ "<<f6<<" │\n";
    cout << "   └───┴───┴───┴───┴───┴───┘\n";

  /*
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
*/
}
void startingGUI() {
  cout << "Welcome To MiniCheckurs! \n";
  cout << "This is a shell based Checkers game with a 6x6 board! \n";
  cout << "The game is played by two players, each player has 12 pieces. (one can also play by themselves) \n";
}
string solidInitialPosition;
string solidFinalPosition;
string player1() {
    //string solidInitialPosition;
    //string solidFinalPosition;

    cout << "Enter the postion of a solid piece you want to move (ex. a2): ";
    cin >> solidInitialPosition;
    cout << "Enter the position where the piece should be moved and is a viable move for that piece (ex. b3): ";
    cin >> solidFinalPosition;
  return solidFinalPosition;
  return solidInitialPosition;
}

string hollowInitialPosition;
string hollowFinalPosition;
string player2() {
   string a1,b1,c1,d1,e1,f1,a2,b2,c2,d2,e2,f2,a3,b3,c3, d3, e3, f3, a4, b4, c4, d4, e4, f4, a5, b5, c5, d5, e5, f5, a6, b6, c6, d6, e6, f6;

    //string hollowInitialPosition;
    //string hollowFinalPosition;

    cout << "Enter the postion of a hollow piece you want to move (ex. f5): ";
    cin >> hollowInitialPosition;
    cout << "Enter the position where the piece should be moved and is a viable move for that piece (ex. e4): ";
    cin >> hollowFinalPosition;
  a1="●";
  b1="●";
  c1="●";
  d1="●";
  e1="●";
  f1="●";

  a2="●";
  b2="●";
  c2="●";
  d2="●";
  e2="●";
  f2="●";

  a3=" ";
  b3=" ";
  c3=" ";
  d3=" ";
  e3=" ";
  f3=" ";

  a4=" ";
  b4=" ";
  c4=" ";
  d4=" ";
  e4=" ";
  f4=" ";

  a5="o";
  b5="o";
  c5="o";
  d5="o";
  e5="o";
  f5="o";

  a6="o";
  b6="o";
  c6="o";
  d6="o";
  e6="o";
  f6="o";
    string checkerboardPositions[] = {a1, b1, c1, d1, e1, f1, a2, b2, c2, d2, e2, f2, a3, b3, c3, d3, e3, f3, a4, b4, c4, d4, e4, f4, a5, b5, c5, d5, e5, f5, a6, b6, c6, d6, e6, f6};

    for (int i = 0; i < 36; i++) {
        if (checkerboardPositions[i] == hollowInitialPosition) {
            checkerboardPositions[i] = " ";
        }
        if (checkerboardPositions[i] == hollowFinalPosition) {
            checkerboardPositions[i] = "o";
        }
    }

    a1 = checkerboardPositions[0];
    b1 = checkerboardPositions[1];
    c1 = checkerboardPositions[2];
    d1 = checkerboardPositions[3];
    e1 = checkerboardPositions[4];
    f1 = checkerboardPositions[5];

    a2 = checkerboardPositions[6];
    b2 = checkerboardPositions[7];
    c2 = checkerboardPositions[8];
    d2 = checkerboardPositions[9];
    e2 = checkerboardPositions[10];
    f2 = checkerboardPositions[11];

    a3 = checkerboardPositions[12];
    b3 = checkerboardPositions[13];
    c3 = checkerboardPositions[14];
    d3 = checkerboardPositions[15];
    e3 = checkerboardPositions[16];
    f3 = checkerboardPositions[17];

    a4 = checkerboardPositions[18];
    b4 = checkerboardPositions[19];
    c4 = checkerboardPositions[20];
    d4 = checkerboardPositions[21];
    e4 = checkerboardPositions[22];
    f4 = checkerboardPositions[23];

    a5 = checkerboardPositions[24];
    b5 = checkerboardPositions[25];
    c5 = checkerboardPositions[26];
    d5 = checkerboardPositions[27];
    e5 = checkerboardPositions[28];
    f5 = checkerboardPositions[29];

    a6 = checkerboardPositions[30];
    b6 = checkerboardPositions[31];
    c6 = checkerboardPositions[32];
    d6 = checkerboardPositions[33];
    e6 = checkerboardPositions[34];
    f6 = checkerboardPositions[35];


  cout << "     A   B   C   D   E   F\n";
    cout << "   ┌───┬───┬───┬───┬───┬───┐\n";
    cout << "1  │ "<<a1<<" │ "<<b1<<" │ " <<c1<<" │ "<<d1<<" │ "<<e1<<" │ "<<f1<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "2  │ "<<a2<<" │ "<<b2<<" │ " <<c2<<" │ "<<d2<<" │ "<<e2<<" │ "<<f2<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "3  │ "<<a3<<" │ "<<b3<<" │ " <<c3<<" │ "<<d3<<" │ "<<e3<<" │ "<<f3<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "4  │ "<<a4<<" │ "<<b4<<" │ " <<c4<<" │ "<<d4<<" │ "<<e4<<" │ "<<f4<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "5  │ "<<a5<<" │ "<<b5<<" │ " <<c5<<" │ "<<d5<<" │ "<<e5<<" │ "<<f5<<" │\n";
    cout << "   ├───┼───┼───┼───┼───┼───┤\n";
    cout << "6  │ "<<a6<<" │ "<<b6<<" │ " <<c6<<" │ "<<d6<<" │ "<<e6<<" │ "<<f6<<" │\n";
    cout << "   └───┴───┴───┴───┴───┴───┘\n";
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
      //solidInitialPosition=" ";
      //solidFinalPosition="●";
      checkerboard();
      cout << "\n";
      cout << "Player 2:\n"; 
      player2();
      
      
    
  }
  }


}
  


