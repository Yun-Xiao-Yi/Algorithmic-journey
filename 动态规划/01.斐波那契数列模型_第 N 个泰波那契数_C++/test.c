class Solution {
public:
    int tribonacci(int n) {

        if(n==0) return 0;
        if(n==1||n==2) return 1;

        vector<int> dp(n+1);

        dp[0]=0,dp[1]=1,dp[2]=1;
        for(int i=3;i<=n;i++)//这里存在错误，i<n错误
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }

        return dp[n];
    }
};

//优化：
class Solution {
public:
    int tribonacci(int n) {
        // 特殊情况处理：第0个泰波那契数是0
        if (n == 0) return 0;
        // 特殊情况处理：第1和第2个泰波那契数是1
        if (n == 1 || n == 2) return 1;

        // 初始化三个变量来存储当前计算的泰波那契数以及一个辅助变量
        int a = 0, b = 1, c = 1, d = 0;

        // 从第3个泰波那契数开始迭代计算到第n个
        for (int i = 3; i <= n; i++) {
            // 计算下一个泰波那契数，根据前三个泰波那契数的和
            d = a + b + c;
            // 更新a、b、c的值，以准备下一轮迭代
            a = b;
            b = c;
            c = d;
        }

        // 返回第n个泰波那契数
        return d;
    }
};
