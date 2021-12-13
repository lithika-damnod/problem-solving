#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

// checks whether a float is a integer or a fractional number
bool isFloat(float a){
    if((int) a == a)
        return false;
    return true;
}

string kangaroo(int x1, int v1, int x2, int v2) {
    /*
        equation:
            position = x + n(v)

        equation to find number on jumps needed:
                kangroos can't reach each other.
            if this is negative or a float:
            else ( if it does )
                they meet.
            -------------------------------
            x1 + n(v1) = x2 + n(v2)
            x1 + nv = x2 + nv
            x1 - x2 = nv - nv
            ( x1 - x2 ) / v = nv / v

            final equation:
                n = ( x2 - x1 ) / v

    */
    int v = v1 - v2;
    float ans = (float)( x2 - x1 ) / v;
    cout << "answer: " << ans << endl;
    bool floatStatus = isFloat(ans);
    if(floatStatus)
        return "NO";
    else if(ans < 0)
        return "NO";
    return "YES";
}

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1, v1, x2, v2) << endl;
    return 0;
}

