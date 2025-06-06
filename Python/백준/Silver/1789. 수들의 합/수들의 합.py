def triangular(n):
    return n * (n + 1) // 2

def Greed(S):
    N = 0
    while triangular(N) <= S:
        N += 1
    return N - 1
S = int(input())
print(Greed(S))