/*
32. Longest Valid Parentheses
Hard

Given a string containing just the characters '(' and ')', find the length of
the longest valid (well-formed) parentheses substring.
 */

#include <stack>
#include <string>

using namespace std;

// O(N) solution using stack.
int
longestValidParentheses(string s)
{
  stack<int> stk;
  stk.push(-1);
  int sl = s.length();
  int len = 0;
  for (int i = 0; i < sl; i++) {
    if (s[i] == '(')
      stk.push(i);
    else {
      stk.pop();
      if (stk.empty())
        stk.push(i);
      else
        len = max(len, i - stk.top());
    }
  }
  return len;
}