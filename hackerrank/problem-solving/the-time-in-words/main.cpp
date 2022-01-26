#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

// counts the number of digits in an integer
inline int count_digit(int number) {
   return int(log10(number) + 1);
}

string minuteInStr(int m, vector<string> strNums){
    if(m == 0)
        return "zero";
    else if(count_digit(m) == 2){
        int digitTwo=m%10;
        m/=10; // remove the digit that got selected
        int digitOne=m%10;
        if(digitTwo == 0){
            switch(digitOne){
                case 1:
                    return "ten";
                case 2:
                    return "twenty";
                case 3:
                    return "thirty";
                case 4:
                    return "fourty";
                case 5:
                    return "fifty";
                case 6:
                    return "sixty";
            }
        }
        else{
            string firstNum = "";
            switch(digitOne){
                case 1:
                    firstNum = "ten";
                    break;
                case 2:
                    firstNum = "twenty";
                    break;
                case 3:
                    firstNum = "thirty";
                    break;
                case 4:
                    firstNum = "fourty";
                    break;
                case 5:
                    firstNum = "fifty";
                    break;
                case 6:
                    firstNum = "sixty";
                    break;
            }
            string returnStr = firstNum + " " + strNums[digitTwo];
            return returnStr;
        }

    }
    else{
        return strNums[m];
    }
}

string timeInWords(int h, int m){
    vector<string> strNums = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
    if(m == 0){
        return strNums[h] + " o' clock";
    }
    else{
        if(m == 15){
            return "quarter past " + strNums[h];
        }
        else if(m == 30){
            return "half past " + strNums[h];
        }
        else if(m == 45){
            return "quarter to " + strNums[h+1];
        }
        else{
            if(m == 1){
                return "one minute past " + strNums[h];
            }
            else if(m > 30){
                int remainder = 60 - m;
                return minuteInStr(remainder, strNums) + " minutes to " + strNums[h];
            }
            return minuteInStr(m, strNums) + " minutes past " + strNums[h];
        }
    }
}

int main(){
    // get the input
    int  h, m; cin >> h >> m;
    cout << timeInWords(h, m) << endl;
    return 0;
}
