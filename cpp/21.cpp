/*
21. Merge Two Sorted Lists
Easy

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing
together the nodes of the first two lists.

Return the head of the merged linked list.
 */

#include <bits/stdc++.h>

using namespace std;

//  Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
  ListNode tmp, *curr = &tmp;
  while (true) {
    if (list1 == nullptr) {
      curr->next = list2;
      break;
    }
    if (list2 == nullptr) {
      curr->next = list1;
      break;
    }
    if (list1->val < list2->val) {
      curr->next = list1;
      list1 = list1->next;
    } else {
      curr->next = list2;
      list2 = list2->next;
    }
    curr = curr->next;
  }
  return tmp.next;
}
