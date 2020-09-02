// Problem:

// Time limit: 1.00 s Memory limit: 512 MB
// You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

// Input

// The first input line contains an integer n.

// The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

// Output

// Print the missing number.

// Constraints
// 2 <= n <= 2 * 10^5
// Example

// Input:
// 5
// 2 3 1 5

// Output:
// 4

// Solution:

// Algorithm:

// Observe that our goal is to find the missing number k_j in the series of integers
// k_i from 1 to k_n. Furthermore observe that the nth partial sum of the
// corresponding infinite series 1 + 2 + 3 + ... + n is equal to
// n * (n  + 1) / 2. Thus we can rewrite the problem statement in this way:
// find the value k_n such that
// k_n = ( n * (n + 1) / 2 ) - (1 + 2 + ... + n - k_n)
// Or stated another way: k_n will be equal to subtracting all of
// the input numbers from ( n * (n + 1) / 2 ); since we know from this series
// what the sum of the numbers happens to be we don't need to use any extra
// space or run any special algorithms, we simply compute the result of this
// function.

// Running time: O(n)!!!! 😄

// Since all we have to do is compute ( n × ( n + 1))  / 2; which is an O(1)
// operation and then subtract each number we read in; which has a run time
// of O(n) (just look through the list). In fact this is the best possible
// time complexity, since we _must_ at least read in the n numbers to even
// be able to attempt the problem in the first place. Thus this problem has
// a lower-bound of Ω(n), and as we just showed since our algorithm has a
// worst-case running time of O(n) it is the most optimal with regards to
// general time-complexity. That said, it is _possible_ that an algorithm
// exists that is also O(n), but has a smaller constant factor and thus
// would be faster.

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// O(n)
int main()
{
  ll n;
  cin >> n;

  // O(1) 😂
  // the nth partial sum
  ll solution = n * (n + 1) / 2;

  // O(n) loop (read in the input)
  while (--n)
  {
    int input;
    cin >> input;
    solution -= input;
  }

  cout << solution;
}