T = int(input())
for i in range(T):
    x = list(map(str,input().split()))
    R = int(x[0])
    S = x[1]
    Sentence = ""
    for j in range(len(S)):
        Sentence += S[j]*R
    print(Sentence)