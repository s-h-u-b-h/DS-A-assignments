/*
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.
*/
class Solution {
public:
    string addStrings(string num1, string num2) {
      string result = "";
        int len1 = num1.size();
        int len2 = num2.size();
        int carry = 0;
        for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry == 1; i--, j--) {
            int x = i < 0 ? 0 : num1[i] - '0';
            int y = j < 0 ? 0 : num2[j] - '0';
            cout << x << " " << y << endl;
            result.append(to_string((x + y + carry) % 10));
            carry = (x + y + carry) / 10;
        }
        return string(result.rbegin(), result.rend());  
    }
};