#include <bits/stdc++.h>

using namespace std;


typedef long long ll;


// since c++ doesn't provide a reliable PI const built-in we can
// we use the observation that acos(-1) is equivalent to pi
const double PI = acos(-1);


// reads in a number n which is the amount of decimal places
// to print PI to and uses
int main()
{
  int n;
  cin >> n;

  // we want to make sure that we are setting a fixed amount of decimal points
  cout << fixed;
  // then we set the amount we want
  cout << setprecision(n);
  // then just print PI with n decimal places
  cout << PI;
}