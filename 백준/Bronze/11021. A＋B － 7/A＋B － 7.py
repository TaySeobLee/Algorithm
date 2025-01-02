T = int(input())
S = 0
for i in range(T):
    A,B = map(int,input().split())
    S= A+B
    print("Case #%d: %d"%((i+1),S))