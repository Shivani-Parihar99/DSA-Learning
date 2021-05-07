/* Given a number N > 1, count the number of factors of the number N.

Input format

A single line of input contains the number 1≤N≤10^12.

Output format

Print a single integer equal to the number of factors of N.*/
// Brute force
#include <iostream>
#include <fstream>
#define lli long long int
using namespace std;

int print_factors_count(lli N) {
  int cnt = 0;

  for (int i = 1; i * i <= N; i ++)
    if (N % i == 0) {
      cnt ++;
      if (i != N/i)
        cnt ++;
    }

  return cnt;
}

int main() {
  ifstream cin("input.txt");
  
  int N;
  cin >> N;
  cout << print_factors_count(N);
  return 0;
}

// Optimization
/* actors always come in pairs, except when the number is a perfect square. In which case both factors are equal.
Below is the optimized code for the above problem.*/
#include <iostream>
#include <fstream>
#define lli long long int
using namespace std;

int print_factors_count(lli N) {
  int cnt = 0;

  for (int i = 1; i * i <= N; i ++)
    if (N % i == 0) {
      cnt ++;
      if (i != N/i)
        cnt ++;
    }

  return cnt;
}

int main() {
  ifstream cin("input.txt");
  
  int N;
  cin >> N;
  cout << print_factors_count(N);
  return 0;
}
