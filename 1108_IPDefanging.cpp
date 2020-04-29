/*
 * problem statement - https://leetcode.com/problems/defanging-an-ip-address/
 * @author - Ankit Sharma
 */

#include <iostream>
using namespace std;

class Solution{
public:
  string defangIPAddress(string address){
    string output = "";
    for (char c : address){
      if (c == '.'){
        output += "[.]";
      }
      else{
        output += c;
      }
    }
    return output;
  }
};
