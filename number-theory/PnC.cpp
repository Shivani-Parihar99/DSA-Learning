/* Problem statement 
There are N different types of balls. There are k1 balls of type 1, k2 balls of type 2, and so on to kn. How many ways can you choose 22 balls that are of different types? */
#include <iostream>
#include <vector>
#include <fstream>

#define lli long long int
using namespace std;

lli number_of_ways(int N, vector<int> K){
  lli total = 0;
  for (auto it : K) 
    total += it;
  lli A = (total * (total - 1)) / 2;

  lli B = 0;
  for (auto it : K)
    B += (it * (it - 1)) / 2;
  
  return A - B;
}

int main() {
  ifstream cin("input.txt");

  int N;
  cin >> N;
  vector<int> K(N);
  for (int i = 0; i < N; i++)
    cin >> K[i];
  cout << number_of_ways(N, K);

  return 0;
}
