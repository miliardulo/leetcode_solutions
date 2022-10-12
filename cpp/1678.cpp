/* 
1678. Goal Parser Interpretation
Easy

You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.
 */

#include <string>

using namespace std;

string interpret(string command) {
  for (auto it = command.begin(); it != command.end(); it++) {
    if (*it == '(') {
      if (*(it + 1) == ')')
        command.replace(it, it + 2, "o");
      else {
        command.replace(it, it + 4, "al");
        it++;
      }
    }
  }
}
