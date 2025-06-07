import math
def Combination(N, M):
    return math.factorial(M) // (math.factorial(M-N) * math.factorial(N))
TestCase = int(input())
for i in range(TestCase):
    N, M = map(int,input().split())
    print(Combination(N,M))