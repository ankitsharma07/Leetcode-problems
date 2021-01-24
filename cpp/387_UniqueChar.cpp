//problem statement - https://leetcode.com/problems/first-unique-character-in-a-string/description/
//author - @ankitsharma

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	
	int count = 0;
	string s;
	cin >> s;

	for(int i=0; i<s.length(); i++){
		for(int j =i; j<s.length(); j++){
			if(s[i] == s[j]){
				count++;
			}
		}
	}
	cout << count << endl;
}