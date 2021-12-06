#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

void roundGrades(vector<int> &grades){
    for(int i=0; i<grades.size(); i++){
        int grade = grades[i];
        // check whether the grades are between 0 and 100
        if(grade >= 0 && grade <= 100){
            // find the next multiple of five
            int remainder = grade%5;
            if(remainder == 0){
                grade+=5;
            }
            else{
                int adder = 5 - remainder;
                grade+=adder;
            }
            // if the difference between the next multiple and previouse value is less than 3 round it
            if((grade - grades[i]) < 3 && grade >= 38){
                grades[i] = grade;
            }

            else if(grade < 38){
                break;
            }
        }
    }
}

vector<int> gradingStudents(vector<int> grades) {
    roundGrades(grades);
    for(int i=0; i<grades.size(); i++){
        cout << grades[i] << endl;
    }
    return grades;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
