#include <bits/stdc++.h>
using namespace std;

/*
Vasya has a grid with 2 rows and n columns. He colours each cell red, green, or blue.

Vasya is colourblind and can't distinguish green from blue. Determine if Vasya will consider the two rows of the grid to be coloured the same.

Input
The input consists of multiple test cases. The first line contains an integer t (1≤t≤100) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n (1≤n≤100) — the number of columns of the grid.

The following two lines each contain a string consisting of n characters, each of which is either R, G, or B, representing a red, green, or blue cell, respectively — the description of the grid.

Output
For each test case, output "YES" if Vasya considers the grid's two rows to be identical, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
*/

void printVector(vector<vector<char>>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " "; 
        }
        cout << endl; 
    }
}

string solution(vector<vector<char>>& colors) {
    unordered_map<char,int> charFreq; 
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < colors[0].size(); j++) {
            char currColor = colors[i][j]; 
            if (currColor == 'R' && colors[1][j] != 'R'
                || currColor != 'R' && colors[1][j] == 'R') {
                return "NO"; 
            }
        }
    }
    return "YES"; 
}

int main()
{
    int n; 
    cin >> n; 

    for (int i = 0; i < n; i++) {
        vector<vector<char>> colors; 
        int cols; 
        cin >> cols; 
        for (int row = 0; row < 2; row++) {
            vector<char> currRow; 
            for (int col = 0; col < cols; col++) {
                char ch; 
                cin >> ch; 
                currRow.push_back(ch); 
            }
            colors.push_back(currRow); 
        }
        string res = solution(colors); 
        cout << res << endl;
        colors.clear(); 
    }
    return 0;
}