#include <vector>
#include <iostream>

using namespace std;

int longestMountain(vector<int>& A) {

        // define uphill and downhill
        vector<int> uphill(A.size(), 0);
        vector<int> downhill(A.size(), A.size()-1);

        int i, maximum = 0;

        for(i = 1; i < A.size(); i++){
            if(A[i] > A[i-1]){
                uphill[i] = uphill[i-1];
            }
            else{
                uphill[i] = i;

            }
        }

        for(i=A.size() - 2; i>=0; i--){
            if(A[i] > A[i+1]){
                downhill[i] = downhill[i+1];
            }
            else{
                downhill[i] = i;
            }
        }

        for(i=0; i<A.size(); i++){
            int temp = -1;

            if(i!=uphill[i] && i!=downhill[i]){
                temp = downhill[i] - uphill[i]+1;
            }
            if (temp > maximum){
                maximum = temp;
            }
        }

        if (maximum >= 3){
            return maximum;
        }
        else {
            return 0;
        }
}

int main(){
  int result;
  int A = [2, 1, 4, 7, 3, 2, 5];
  result = longestMountain(A);
  cout << result << endl;
}
