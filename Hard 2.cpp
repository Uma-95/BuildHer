/*Hard 2 
You are given a string s. You can convert s to a 
palindrome by adding characters in front of it.
Return the shortest palindrome you can find by performing this transformation.
 
Example 1:
Input: s = "aacecaaa"
Output: "aaacecaaa"
Example 2:
Input: s = "abcd"
Output: "dcbabcd"
 
Constraints:
0 <= s.length <= 5 * 104
s consists of lowercase English letters only*/

#include <iostream>
#include <string>

using namespace std;

string shortestPalindrome(string s) {
    int l = s.length();
    string reversed = s;
    //reverse the input string s to get reversed.
    reverse(reversed.begin(), reversed.end());

    for (int i = 0; i < l; i++) {
        // iterate over the string and compare its suffix with the prefix of the reversed string. 
        //If they match, we can form a palindrome by adding the characters from the prefix of reversed to s.
        if (s.substr(0, l - i) == reversed.substr(i)) {
            return reversed.substr(0, i) + s;
        }
    }
    //else return empty string
    return "";
}

int main() {
    string s;
    cin>>s;
    string answer = shortestPalindrome(s);
    cout << answer << endl;

    return 0;
}


