class Solution {
public:
    int tribonacci(int n) {
        int tribonacci[38] = {0};
        tribonacci[0] = 0;
        tribonacci[1] = 1;
        tribonacci[2] = 1;
        
        for(int i = 3; i < 38; i++) {
            tribonacci[i] = tribonacci[i-3] + tribonacci[i-2] + tribonacci[i-1];
        }
        return tribonacci[n];
    }
};


