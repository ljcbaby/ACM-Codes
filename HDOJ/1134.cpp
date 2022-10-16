#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

class BigInt {
public:
    BigInt() {
        memset(num, 0, sizeof(num));
        num[0] = 1;
    }
    BigInt(int x) {
        memset(num, 0, sizeof(num));
        num[0] = 1;
        num[1] = x;
    }
    bool operator!=(const int x) {
        return *this != BigInt(x);
    }
    bool operator!=(const BigInt& x) {
        if (num[0] != x.num[0])
            return true;
        for (int i = 1;i <= num[0];i++)
            if (num[i] != x.num[i])
                return true;
        return false;
    }
    BigInt operator+(const BigInt& x) {
        BigInt t;
        t.num[0] = max(num[0], x.num[0]);
        for (int i = 1;i <= t.num[0];i++) {
            t.num[i] += num[i] + x.num[i];
            t.num[i + 1] += t.num[i] / 10;
            t.num[i] %= 10;
        }
        if (t.num[t.num[0] + 1])
            t.num[0]++;
        return t;
    }
    BigInt operator*(const BigInt& x) {
        BigInt t;
        t.num[0] = num[0] + x.num[0];
        for (int i = 1;i <= num[0];i++)
            for (int j = 1;j <= x.num[0];j++) {
                t.num[i + j - 1] += num[i] * x.num[j];
                t.num[i + j] += t.num[i + j - 1] / 10;
                t.num[i + j - 1] %= 10;
            }
        while (t.num[t.num[0]] == 0 && t.num[0] > 1)
            t.num[0]--;
        return t;
    }
    BigInt operator*(const int x) {
        return *this * BigInt(x);
    }
    BigInt operator/(const int x) {
        BigInt t;
        t.num[0] = num[0];
        int r = 0;
        for (int i = num[0];i >= 1;i--) {
            t.num[i] = (num[i] + r * 10) / x;
            r = (num[i] + r * 10) % x;
        }
        while (t.num[t.num[0]] == 0 && t.num[0] > 1)
            t.num[0]--;
        return t;
    }
    void print() {
        for (int i = num[0];i >= 1;i--)
            printf("%d", num[i]);
        printf("\n");
    }
private:
    int num[1000];
};

BigInt n[101][101];

BigInt dp(int x, int y) {
    if (y == 0)
        return 1;
    if (x == 0 || x < y)
        return 0;
    if (n[x][y] != 0)
        return n[x][y];
    return n[x][y] = dp(x - 1, y) + dp(x, y - 1);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int t;
    while (scanf("%d", &t) && t != -1)
        dp(t, t).print();
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
