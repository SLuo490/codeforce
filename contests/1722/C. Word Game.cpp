#include <bits/stdc++.h>
using namespace std; 

/*
    Three guys play a game: first, each person writes down 𝑛 distinct words of length 3. Then, they total up the number of points as follows:

    if a word was written by one person — that person gets 3 points,
    if a word was written by two people — each of the two gets 1 point,
    if a word was written by all — nobody gets any points.
    In the end, how many points does each player have?
    Input
    The input consists of multiple test cases. The first line contains an integer 𝑡 (1≤𝑡≤100) — the number of test cases. The description of the test cases follows.

    The first line of each test case contains an integer 𝑛 (1≤𝑛≤1000) — the number of words written by each person.

    The following three lines each contain 𝑛 distinct strings — the words written by each person. Each string consists of 3 lowercase English characters.

    Output
    For each test case, output three space-separated integers — the number of points each of the three guys earned. You should output the answers in the same order as the input; the 𝑖-th integer should be the number of points earned by the 𝑖-th guy.
*/

void printSolution(vector<int> res) {
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " "; 
    }
    cout << endl; 
}

vector<int> solutions(vector<vector<string>>& users) {
    vector<int> res; 
    unordered_map<string, int> wordFreq; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < users[0].size(); j++) {
            string currWord = users[i][j];
            wordFreq[currWord]++; 
        }
    }

    for (int i = 0; i < 3; i++) {
        int count = 0; 
        for (int j = 0; j < users[0].size(); j++) {
            string currWord = users[i][j];
            if (wordFreq[currWord] == 3) {
                count += 0; 
            } else if (wordFreq[currWord] == 2) {
                count += 1; 
            } else {
                count += 3; 
            }
        }
        res.push_back(count); 
    }
    return res; 
}

int main()
{
    int n; 
    cin >> n; 

    for (int i = 0; i < n; i++) {
        vector<vector<string>> users; 
        int words; 
        cin >> words; 
        for (int j = 0; j < 3; j++) {
            vector<string> person; 
            for (int k = 0; k < words; k++) {
                string word; 
                cin >> word; 
                person.push_back(word); 
            }
            users.push_back(person); 
        }
        vector<int> res = solutions(users); 
        printSolution(res); 
    }
    return 0;
}