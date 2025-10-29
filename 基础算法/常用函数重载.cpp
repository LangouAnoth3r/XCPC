template<typename Int>
Int sqrt(Int n) {
    Int l = 0, r = 1E16, ans = l;
    while (l <= r) {
        Int mid = (l + r) >> 1;
        if (mid * mid <= n) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

template<typename Int>
Int gcd(Int a, Int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

template<typename Int>
Int lcm(Int a, Int b) {
    return a / gcd(a, b) * b;
}