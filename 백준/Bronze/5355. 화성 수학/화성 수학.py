# @ = *3
# % = +5
# # = -7
T = int(input())
num = 0

for i in range(T):
    x = list(map(str,input().split()))
    num = float(x[0])
    for j in range(len(x)-1):
        if(x[j+1]=="@"):
            num *= 3
        if(x[j+1]=="%"):
            num += 5
        if(x[j+1]=="#"):
            num -= 7
    print("{:.2f}".format(num))