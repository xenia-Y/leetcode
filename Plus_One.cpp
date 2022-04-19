class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        int c = 1;
        for (int k = i; k >= 0; k--) {
            digits[k] += c;
            c = digits[k] / 10;
            digits[k] = digits[k] % 10;
        }
        if(c > 0) digits.insert(digits.begin(), c);
        return digits;
    }
};
