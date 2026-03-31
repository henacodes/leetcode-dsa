#include <stdexcept>
#include <string>

using namespace  std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string new_string;

        for (int i = 0; i < word1.length(); i++) {
            new_string += word1.at(i);
            try {
                new_string += word2.at(i);
            } catch (const out_of_range) {
            }
        }

        if (word2.length() > word1.length()) {
            new_string += word2.substr(word1.length());
        }
        return new_string;

    }

};

