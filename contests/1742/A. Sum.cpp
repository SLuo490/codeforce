#include <bits/stdc++.h>
using namespace std;

string solve(int a, int b, int c) {
  string yes = "YES"; 
  string no = "NO"; 
  if (a + b == c) {
    return yes; 
  } else if (a + c == b) {
    return yes; 
  } else if (b + c == a) {
    return yes; 
  }
  return no; 
}

int main()
{
  int n; 
  cin >> n; 

  while (n) {
    int a, b, c; 
    cin >> a >> b >> c; 

    string res = solve(a, b, c); 
    cout << res << endl; 

    n--; 
  }
  return 0;
}