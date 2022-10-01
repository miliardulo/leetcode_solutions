/*
9. Palindrome Number
Easy

Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.
    For example, 121 is a palindrome while 123 is not.
 */

#include <cmath>
#include <string>

using namespace std;
/*
// O(logN) solution
bool
isPalindrome(int x)
{
  if (x < 0)
    return false;
  string s = to_string(x);
  int sl = s.length();
  for (int i = 0; i < sl / 2; i++)
    if (s[i] != s[sl - i - 1])
      return false;
  return true;
}
 */

// O(logN) solution - without converting the integer to a string
bool isPalindrome(int x) {
  if (x < 10)
    return x < 0 ? false : true;
  int highpow = int(floor(log10(x)));
  int lowpow = 0;
  int highdigit, lowdigit;
  while (highpow > lowpow) {
    highdigit = x / int(pow(10, highpow)) % 10;
    lowdigit = x % int(pow(10, lowpow + 1)) / int(pow(10, lowpow));
    if (highdigit != lowdigit)
      return false;
    highpow--;
    lowpow++;
  }
  return true;
}
