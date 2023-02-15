#include<bits/stdc++.h>
using namespace std;

int dp[20][20];

int numTreesUtil(int low, int high) {
  if (low >= high) return 1;
  if (dp[low][high]) return dp[low][high];
  int res = 0;
  for (int i = high; i >= low; i--) {

    if (i == low) res += numTreesUtil(low + 1, high);
    else if (i == high) res += numTreesUtil(low, high - 1);
    else res += numTreesUtil(low, i - 1) * numTreesUtil(i + 1, high);
  }
  dp[low][high] = res;
  return res;
}
    
int numTrees(int n) {
  for(int i = 1; i <= 19; i++) {
    for (int j = 1; j <= 19; j++) {
      if (i == j) dp[i][j] = 1;
      else dp[i][j] = 0;
    }
  }
  return numTreesUtil(1, n);
}

int main() {
  cout << numTrees(4);
}
