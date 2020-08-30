// Problem:

//  Given n random integers, print the distinct (unique)
//  integers in sorted order.

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


// Total runtime is O(3n lg n) or about O(n lg n) (the sorting term dominates)
int main()
{
  int n;
  cin >> n;
  int n_dup = n;


  // O(n) loop
  // first we'll read in the ints into a set
  // so we can't have duplicates
  set<int> ints;
  while (n_dup--)
  {
    int input;
    cin >> input;
    ints.insert(input);
  }

  // O(n) to move to vector
  // next we move the ints to a vector
  // so we can sortthem
  vector<int> sorted_ints(ints.begin(), ints.end());
  // O(n lg n) to sort them (assuming quick sort)
  // then we sort them
  sort(sorted_ints.begin(), sorted_ints.end());

  // now just print them back out
  for (auto x : sorted_ints) {
    cout << x << ' ';
  }
}