A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())
score = [A,B,C,D,E]
sum = 0
for i in range(len(score)):
    if(score[i]<= 40):
        score[i] = 40
    sum += score[i]
print(int(sum/5))