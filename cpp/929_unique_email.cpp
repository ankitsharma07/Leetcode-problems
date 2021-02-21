#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> set;

        for (string &email : emails) {
            string clean_email;

            for(char c : email){
                if(c == '+' || c == '@')
                    break;
                if(c == '.')
                    continue;

                clean_email += c;
            }

            clean_email += email.substr(email.find('@'));
            set.insert(clean_email);
        }
        return set.size();
    }
};
