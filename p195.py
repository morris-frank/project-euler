from math import sqrt
import fractions

def T(r):
    s = 0
    limit = int(r * sqrt(3) * 2)
    for m in range(2, limit + 1):
        for n in range(1, m):
            if fractions.gcd(m, n) != 1:
                continue
            a = (m + 2 * n) * m
            b = (n + 2 * m) * n
            c = m * m + m * n + n * n
            d = fractions.gcd(a, fractions.gcd(b, c))
            mn = m * n
            if r * sqrt(3) * 2 < mn:
                break
            s += int(r * d * 2 / (sqrt(3) * mn))
    return s

print (T(1053779))