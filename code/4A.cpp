#include <bits/stdc++.h>
using namespace std;

void solution (int num) {
    if (num % 2 != 0 || num == 2) {
        cout << "NO"; 
    } else {
        cout << "YES"; 
    }
}

int main()
{
    int num; 
    cin >> num; 
    solution (num); 
    return 0;
}