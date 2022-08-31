#include <bits/stdc++.h>
using namespace std;

/*
Timur likes his name. As a spelling of his name, he allows any permutation of the letters of the name. For example, the following strings are valid spellings of his name: Timur, miurT, Trumi, mriTu. Note that the correct spelling must have uppercased T and lowercased other letters.

Today he wrote string s of length n consisting only of uppercase or lowercase Latin letters. He asks you to check if s is the correct spelling of his name.

Input
The first line of the input contains an integer t (1≤t≤103) — the number of test cases.

The first line of each test case contains an integer n (1≤n≤10) — the length of string s.

The second line of each test case contains a string s consisting of only uppercase or lowercase Latin characters.

Output
For each test case, output "YES" (without quotes) if s satisfies the condition, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
*/

string solution(string& name, int length) {
    if (length > 5) {
        return "NO"; 
    }

    unordered_map<char,int> charFreq = {
        {'T', 1}, 
        {'i', 1}, 
        {'m', 1}, 
        {'u', 1},
        {'r', 1}
    }; 

    for (char ch : name) {
        if (charFreq.find(ch) != charFreq.end()) {
            charFreq[ch]--; 

            if (charFreq[ch] == 0) {
                charFreq.erase(ch); 
            }
        }
    }

    return charFreq.empty() ? "YES" : "NO"; 
}

int main()
{
    int n; 
    cin >> n; 

    for (int i = 0; i < n; i++) {
        int length; 
        string name; 

        cin >> length >> name; 

        string res = solution(name, length); 
        cout << res << endl; 
    }

    return 0;
}