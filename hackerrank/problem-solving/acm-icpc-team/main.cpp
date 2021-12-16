#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int findMax(vector<int> arr){
    int maxVal = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}
int countMax(vector<int> arr){
    int maxVal = findMax(arr);
    int nMax = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == maxVal)
            nMax++;
    }
    return nMax;
}

/*
 * Complete the 'acmTeam' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY topic as parameter.
 */

vector<int> acmTeam(vector<string> topic) {
    vector<int> results;
    for(int i=0; i<topic.size(); i++){
        for(int j=i+1; j<topic.size(); j++){
            int nSkills = 0;
            for(int k=0; k<topic[i].size(); k++){
                if(topic[i][k] == '0'){
                    if(topic[j][k] == '1')
                        nSkills++;
                }
                else{
                    nSkills++;
                }

            }
            results.push_back(nSkills);
        }
    }
    // find max and count the number of max vals
    int maxVal = findMax(results);
    int sameMax = countMax(results);
    cout << maxVal << endl;
    cout << sameMax << endl;
    vector<int> returnArr = {maxVal, sameMax};
    return returnArr;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    vector<string> topic(n);

    for (int i = 0; i < n; i++) {
        string topic_item;
        getline(cin, topic_item);

        topic[i] = topic_item;
    }

    vector<int> result = acmTeam(topic);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
