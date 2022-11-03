""" 
20. Valid Parentheses
Easy

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.
"""


class Solution:
    def isValid(self, s: str) -> bool:
        paren = {"(": 1, ")": -1, "{": 2, "}": -2, "[": 3, "]": -3}
        stack = list()
        for c in s:
            if paren[c] > 0:
                stack.append(c)
            else:
                if not stack or paren[stack[-1]] != -paren[c]:
                    return False
                else:
                    del stack[-1]
        return len(stack) == 0
