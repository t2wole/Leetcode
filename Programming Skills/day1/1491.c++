class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double result;
        int n = salary.size(), sum = 0;
        
        for(int i = 0; i < n; i++) {
            sum += salary[i];
        }
        
        result = sum - (salary[0] + salary[n-1]);
        result = result / (n-2);
        return result;
    }
};