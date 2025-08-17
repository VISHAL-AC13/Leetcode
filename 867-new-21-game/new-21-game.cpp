class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
         if (k == 0 || n >= k - 1 + maxPts) return 1.0;

        vector<double> dp(n + 1, 0.0);
        dp[0] = 1.0;
        double Wsum = 1.0;  // window sum for last maxPts dp[j] where j < k
        double res = 0.0;

        for (int i = 1; i <= n; i++) {
            dp[i] = Wsum / maxPts;

            if (i < k) {
                Wsum += dp[i];      // still can draw
            } else {
                res += dp[i];       // stopped, valid result
            }

            if (i - maxPts >= 0 && i - maxPts < k) {
                Wsum -= dp[i - maxPts]; // slide window
            }
        }
        return res;
    }
};