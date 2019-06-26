#ifndef EB_00006
#define EB_00006

#include <string>

using namespace std;

class Solution {
private:
    string substrOfString(string s, int pos) {
        if (pos < s.size()) {
            return s.substr(pos, 1);
        }

        return "";
    }
    string stringOfLevel(string s, int deep, int cur) {
        string rt = "";

        for (int base = 0; base < s.size(); base += deep * 2) {
            if (cur == deep || cur == 0) {
                rt += substrOfString(s, base + cur);
            } else {
                rt += substrOfString(s, base +cur) + substrOfString(s, base + deep * 2 - cur);
            }
        }

        return rt;
    }
public:
    // 00006
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        string str = "";

        for (int i = 0; i < numRows; ++i) {
            str += stringOfLevel(s, numRows - 1, i);
        }

        return str;
    }
};

#endif
