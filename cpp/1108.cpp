/* 
1108. Defanging an IP Address
Easy

Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".
 */

#include <string>

using namespace std;

string defangIPaddr(string address) {
  size_t fpos, prev = 0;
  while ((fpos = address.find('.', prev)) != string::npos) {
    address.replace(fpos, 1, "[.]");
    prev = fpos + 3;
  }
  return address;
}
