//Given an array A of N integers. Answer Q queries of the type (l, r)(l,r) - reverse the subarray A[l...r]. Print the array after each query.
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
  ifstream cin("input.txt");

  int N, Q;
  cin >> N >> Q;
  vector<int> A(N, 0);
  for (int i = 0; i < N; i ++)
    cin >> A[i];
    
  for(int i = 0; i < Q; i++) {
    int l, r;
    cin >> l >> r;
    l --; r --; // covert to 0-based index

    for(int p1 = l, p2 = r; p1 < p2; p1++, p2--){
      swap(A[p1], A[p2]);
    }
  }

  for (int i = 0; i < N; i++) cout << A[i] << " "; cout << "\n";

  return 0;
}
