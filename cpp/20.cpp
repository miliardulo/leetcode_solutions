/*
20. Valid Parentheses
Easy

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid.

An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.

 */

#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

// O(N) solution?
bool
isValid(string s)
{
  unordered_map<char, char> dict = { { ')', '(' }, { '}', '{' }, { ']', '[' } };
  stack<char> stk;
  for (char c : s) {
    if (dict.find(c) == dict.end())
      stk.push(c);
    else {
      if (stk.empty() || stk.top() != dict.at(c))
        return false;
      else
        stk.pop();
    }
  }
  return stk.empty();
}