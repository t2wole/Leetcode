int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n, res = left + (right - left) / 2;

        while (true) {
            switch (guess(res)) {
            case -1:
                right = res - 1;
                res = left + (right - left) / 2;
                break;
            case 1:
                left = res + 1;
                res = left + (right - left) / 2;
                break;
            case 0:
                return res;
            }
        }
        return 0;
    }
};






