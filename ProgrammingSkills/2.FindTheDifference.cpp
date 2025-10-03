#include <string>;
#include <iostream>;
#include <stdexcept>;
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        //Constraints
        if(s.size() < 0 || s.size() > 1000) throw invalid_argument("Not in range");
        if(t.size() != (s.size() + 1)) throw invalid_argument("Not valid size 't' string");
        
        if(s.empty()) return t[0];

        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < t.size(); j++){
                if (t[j] == s[i]){
                    t.erase(j,1);
                    break;
                }
            }
        }
        return t[0];
    }
};

int main() {
    Solution solution;
    
    try {
        // Test cases
        cout << solution.findTheDifference("abcd", "abcde") << endl;  // Output: "e"
        cout << solution.findTheDifference("", "y") << endl;          // Output: "y"
        cout << solution.findTheDifference("a", "aa") << endl;        // Output: "a"
        
    } catch (const invalid_argument &e) {
        cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}