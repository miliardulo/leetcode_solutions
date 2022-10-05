/* 
1025. Divisor Game
Easy

Alice and Bob take turns playing a game, with Alice starting first.

Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

    Choosing any x with 0 < x < n and n % x == 0.
    Replacing the number n on the chalkboard with n - x.

Also, if a player cannot make a move, they lose the game.

Return true if and only if Alice wins the game, assuming both players play optimally.
 */

#include <bits/stdc++.h>

using namespace std;

bool divisorGame(int n) {
  vector<bool> win = {false, false, true};
  for (int i = 3; i <= n; i++) {
    int sqroot = floor(sqrt(i));
    bool found = false;
    for (int j = 1; j <= sqroot; j++)
      if (i % j == 0 && !win[i - j]) {
        win.push_back(true);
        found = true;
        break;
      }
    if (!found)
      win.push_back(false);
  }
  return win[n];
}
