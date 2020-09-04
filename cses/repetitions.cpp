// Problem:

// Time limit: 1.00 s Memory limit: 512 MB
// You are given a DNA sequence: a string consisting of characters A, C, G, and T.
// Your task is to find the longest repetition in the sequence.
// This is a maximum-length substring containing only one type of character.

// Input

// The only input line contains a string of n characters.

// Output

// Print one integer: the length of the longest repetition.

// Constraints
// 1≤n≤106
// Example

// Input:
// ATTCGGGA

// Output:
// 3

// Solution:

// Algorithm:

// Since the goal is to find the length of the longest repeating substring
// we can observe that we can tell if we are in the middle of a repetition
// if the current character is the same as the last character that we saw.
// Thus if we keep a counter that we increment each time we see a character
// that is the same as the last (which we would start at 1) and reset this
// to 1 each time we see a different characer then we can find the length
// of the current repeating substring.

// If we just keep a comparison integer which tracks the length of the longest
// subsring that we have seenso far we can simply update this each time
// the length of the current substring is longer than the longest counter.
// Then we simply return this longest substring counter as our solution.

// Time complexity: Θ(n) = Ω(n) = O(n)!!!! 😄

// Since our algorithm doesn't do any extra computation beyond a loop which
// reads in the input and does some O(1) comparisons on the current character
// and some counters it has a worst-case time complexity of O(n). Notice
// that it also has a best-case time complexity of Ω(n) since we must read in
// the characers at least once to have actually solved the problem. Since
// Ω(n) = O(n) we have a tight-bound on the time complexity of the algorithm
// of Θ(n) from both directions.

// Space complexity: Θ(1) = Ω(1) = O(1)!!!! 😄

// Since our algorithm is online and doesn't use any space dependant on n
// it is just O(1) worst-case space complexity, and Ω(1) best-case space
// complexity. Thus, it has Θ(1) space complexity.

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// O(n)
int main()
{
  char c;
  // we haven't started yet so this is null
  char last_c = '\0';
  int len_longest_substr = 1;
  int len_current_substr = 1;

  cin >> noskipws;
  // O(n) loop (read in the input, do basic comparisons with it)
  while (cin >> c)
  {
    if (len_current_substr > len_longest_substr)
    {
      len_longest_substr = len_current_substr;
    }

    if (c == last_c)
    {
      ++len_current_substr;
    }
    else
    {
      len_current_substr = 1;
    }

    last_c = c;

    // we need to run all of the logic even if c is a newline characer because
    // otherwise we'll be off by 1 if the longest substring happens to be
    // the last substring; since we still need to assign the length to it
    if (c == '\n') break;
  }

  cout << len_longest_substr;
}