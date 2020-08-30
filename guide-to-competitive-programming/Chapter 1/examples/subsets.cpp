#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> subset;

void printVec(std::vector <int> const &a) {
   if (a.size() == 0) {
     cout << "{}";
   }
   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';

   cout << '\n';
}



void search(int n, int k) {
  cout << "k: " << k << '\n';
  if (k == n+1) {
    printVec(subset);
  } else {
    subset.push_back(k);
    search(n, k+1);
    subset.pop_back();
    search(n, k+1);
  }
}

int main() {
  int n;
  cin >> n;
  search(n, 1);
}