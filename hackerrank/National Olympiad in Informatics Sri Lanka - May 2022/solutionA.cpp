#include <iostream> 
#include <string> 
#include <vector>
using namespace std;

int main(){
string s;cin>>s;
long long l = 0,r = 0;
int n = (int)s.length();
long long ans = 0;
int x = 0,y = 0,z = 0;
long long prev = 0;
for (long long i = 0;i + 3<n;++i){
if (s.substr(i,4)=="2049"){
ans+=(i + 1 - prev)*(n - i - 3);
prev = i + 1;
}
}
cout<<ans<<'\n';
return 0;
}