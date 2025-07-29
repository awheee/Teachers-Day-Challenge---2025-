class Solution {
public:
    int value(char c){
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int total = 0;
        int n = s.length();
        int i = 0;

        while (i<n){
            int curr = value(s[i]);
            int next;
            if (i+1<n){
                next = value(s[i+1]);
            } else {
                next = 0;
            }
            if (curr < next){
                total += (next - curr);
                i += 2;
            } else {
                total += curr;
                i++;
            }
        }
        
        return total;
    }
};
