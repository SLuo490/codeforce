#include <bits/stdc++.h>
using namespace std;

string solve(vector<int>& nums) {
  sort(nums.begin(), nums.end()); 
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] <= nums[i - 1]) {
      return "NO"; 
    }
  }
  return "YES"; 
}


int main()
{
  int n; 
  cin >> n; 

  while (n) {
    vector<int> arr; 
    int size; 
    cin >> size; 

    for (int i = 0; i < size; i++) {
      int num; 
      cin >> num; 
      arr.push_back(num); 
    }

    string res = solve(arr); 
    cout << res << endl; 
    n--; 
  }
  return 0;
}