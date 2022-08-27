#include <bits/stdc++.h>
using namespace std;

/*
    Edge cases: 
        * 1 letter --> return 0
        * 2 letter --> check if the letter has frequency of 3 --> use hash map
    
    check the rows, cols, and diagonals and count the similars

     r b  --> 2 same color --> 3 - 2 = 1
     b r 

     c c --> 1 same color --> 3 - 1 = 2 
     w b

     a b --> 0 same color --> 3 - 0 = 3 
     c d

     a a --> Edge case : 1 letter return 0 
     a a

     r r --> Edge case: r: 3 b: 1 --> return 1
     r b
*/

int solution(vector<vector<char>>& colors) {
    unordered_map<char, int> mp; 
    for (int i = 0; i < colors.size(); i++) {
        for (int j = 0; j < colors.size(); j++) {
            char ch = colors[i][j]; 
            mp[ch]++; 
        }
    }

    // edge cases:
    for (auto it : mp) {
        // 3 of the same letter
        if (it.second == 3) return 1; 
        // 4 of the same letter
        if (it.second == 4) return 0; 
    }

    int counter = 0; 
    char x0 = colors[0][0]; 
    char x1 = colors[0][1]; 
    char y0 = colors[1][0]; 
    char y1 = colors[1][1]; 

    if (x0 == x1) counter++; 
    if (x0 == y0) counter++; 
    if (x0 == y1) counter++; 
    if (x1 == y1) counter++; 
    if (x1 == y0) counter++; 
    if (y1 == y0) counter++; 


    return 3 - counter; 
}



int main()
{
    int n; 
    char rowA, rowB, rowC, rowD; 
    vector<vector<char>> colors;
    cin>>n;  
    for (int i = 0; i < n; i++) {
        cin >> rowA >> rowB >> rowC >> rowD; 
        vector<char> firstRow = {rowA, rowB}; 
        vector<char> secondRow = {rowC, rowD};
        colors.push_back(firstRow); 
        colors.push_back(secondRow);  

        cout << solution(colors) << endl; 

        colors.clear(); 
    }
    return 0;
}