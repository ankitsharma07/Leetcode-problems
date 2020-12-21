#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int total = 0;

        for(int i = 1971; i < year; ++i){
            total += checkLeapYear(i)? 366 : 365; // ternary operator
        }

        for(int i = 1; i < month; ++i){
            if(i != 2){
                total += days[i-1];
            }
            else {
                total += checkLeapYear(year) ? days[i-1] + 1 : days[i-1];
            }
        }

        total += day;

        unordered_map<int, string> hashmap;
        // 1971.01.01 : Friday
        hashmap[1] = "Friday";
        hashmap[2] = "Saturday";
        hashmap[3] = "Sunday";
        hashmap[4] = "Monday";
        hashmap[5] = "Tuesday";
        hashmap[6] = "Wednesday";
        hashmap[0] = "Thursday";

        return hashmap[total % 7];
    }
    private:
        bool checkLeapYear(int year){
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
                return true;
            else
                return false;
        }
};

int main() {
    Solution obj_day;
    int day = 31;
    int month = 8;
    int year = 2019;

    string dayOfTheWeek = obj_day.dayOfTheWeek(day, month, year);
    cout << dayOfTheWeek;
}
