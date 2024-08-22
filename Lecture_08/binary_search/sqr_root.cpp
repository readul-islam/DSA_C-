/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/

#include <iostream>
using namespace std;

int sqrt(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start)/2;
    int ans = 0;
    while (start <= end)
    {
        cout << "Start: "<< start<<" " << "End: " << end <<" " <<"Mid: " << mid << endl;
        if (mid * mid <= n/mid)
        {
            ans = mid;
            start = mid + 1;
        }else{
            end  = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int mySqrt(int x) {
        long i;
        for(i = 1; i*i <= x; i++);
        cout << i << endl;
        return --i;
    }


double morePrecious(int n, int precious, int tmpSol){
    double factor  = 1;
    double ans = tmpSol;

    for(int i=0; i<precious; i++){
        factor = factor/10;

        for(double j = ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;

}    
int main()
{
    int n;
    cin >> n;
    // cout << sqrt(n)<< endl;
    int temp = mySqrt(n);
    cout << morePrecious(n, 3, temp) << endl;

}