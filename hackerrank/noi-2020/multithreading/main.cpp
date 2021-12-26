#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool contains(vector<uint64_t> vec, uint64_t elem)
{
    bool result = false;
    if( find(vec.begin(), vec.end(), elem) != vec.end() )
    {
        result = true;
    }
    return result;
}

int main() {
    int n;
    cin>>n;
    vector<int> processStack;
    bool valid = true;
    int status = 0;
    for(int i=0; i<n; i++)
    {
        string command;
        int process;
        cin>>command>>process;
        if(valid)
        {
            if(command == "RUN")
            {
                for(unsigned int j=0; j<processStack.size(); j++)
                {
                    if(processStack[j] == process)
                    {
                        status = i+1;
                        valid = false;
                        break;
                    }
                }
                processStack.push_back(process);
            }else if(command == "END")
            {
                if(processStack.size()==0 || processStack.back() != process)
                {
                    status = i+1;
                    valid = false;
                    break;
                }else
                {
                    processStack.pop_back();
                }
            }
        }
    }
    status = (status == 0 && processStack.size()!=0)?n+1:status;
    cout<<status<<"\n";
    return 0;
}
}
