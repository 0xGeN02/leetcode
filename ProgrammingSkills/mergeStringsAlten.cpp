#include <iostream>;
#include <string>;
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0, j = 0;
        int s1 = word1.size(), s2 = word2.size();

        //Constraints
        if(s1 < 1 || s1 > 100 || s2 < 1 || s2 > 100) throw invalid_argument("Not in range");

        while (i < s1 && j < s2) {
            result.push_back(word1[i++]);
            result.push_back(word2[j++]);
        }

        if(i < s1) result += word1.substr(i);
        if(i < s2) result += word2.substr(j);

        return result;
    }
};

int main() {
    Solution sol;

    try {
        cout << sol.mergeAlternately("abc", "pqr") << endl;   // apbqcr
        cout << sol.mergeAlternately("ab", "pqrs") << endl;   // apbqrs
        cout << sol.mergeAlternately("abcd", "pq") << endl;   // apbqcd
        // Caso inválido
        cout << sol.mergeAlternately("", "abc") << endl;      // error
    } catch (const invalid_argument &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}