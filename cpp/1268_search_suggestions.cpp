// problem statement: https://leetcode.com/problems/search-suggestions-system/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {

        // sort the products and use binary search for the prefixes
        sort(products.begin(), products.end());

        vector<vector<string>> output;

        int start, binary_search_start, n = products.size();
        string prefix;

        for(char &c: searchWord){
            prefix += c;

            // Get the starting index of word starting with `prefix`
            start = lower_bound(products.begin() + binary_search_start, products.end(), prefix) - products.begin();

            output.push_back({});

            // Add the words with the same prefix to the result.
            // Loop runs until `i` reaches the end of input or 3 times or till the
            // prefix is same for `products[i]` Whichever comes first.
            for(int i = start; i < min(start + 3, n) && !products[i].compare(0, prefix.length(), prefix); i++){
                output.back().push_back(products[i]);
            }

            binary_search_start = start;
        }
        return output;
    }
};
