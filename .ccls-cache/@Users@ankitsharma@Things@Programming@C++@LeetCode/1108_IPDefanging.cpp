/*
 * problem statement - https://leetcode.com/problems/defanging-an-ip-address/
 * @author - Ankit Sharma
 */

#include <iostream>
using namespace std;

class Solution {
  public:
    string defangIPaddr(string address) {
      string defang = "";

      for (int i = 0; i < address.length(); i++) {
        if (address[i] != '.') {
          defang += address[i];
        }
        else {
          defang += "[.]";
          continue;
        }
      }
      return defang;
    }
};

int main() {
  Solution obj_defang;
  string address = "1.1.1.1";
  string output;
  output = obj_defang.defangIPaddr(address);
  cout << output << endl;

  return 0;
}
