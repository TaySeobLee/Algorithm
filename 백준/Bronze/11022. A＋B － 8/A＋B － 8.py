T = int(input())
C = 0
for i in range(T):
    A,B = map(int,input().split())
    C = A + B
    print( "Case #{}: {} + {} = {}".format(i+1,A,B,C))