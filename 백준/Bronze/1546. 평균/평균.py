def recalculate(num, max):
    num  = num/max *100
    return num
N = int(input())
max = 0
answer = 0
x = list(map(int,input().split()))
for i in range(N):
    if( max < x[i]):
        max = x[i]
    else:
        pass
for i in range(N):
    answer = recalculate(x[i],max) + answer
print(answer / N)
