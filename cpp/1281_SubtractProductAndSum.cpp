#include <iostream>
using namespace std;

class Solution {
    public:
        int subtractProductAndSum(int n) {
            int sum = 0;
            int product = 1;

            while(n > 0){
                sum += n%10;
                product *= n%10;
                n /= 10;
            }
            return product-sum;
        }
};

int main(){
    Solution obj_diffOfP_S;

    int n = 234;
    int output = obj_diffOfP_S.subtractProductAndSum(n);
    cout << output << endl;
}
