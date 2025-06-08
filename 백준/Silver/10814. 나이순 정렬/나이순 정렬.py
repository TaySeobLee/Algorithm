#반복 횟수 N
N = int(input())
X_list =[]
for i in range(N):
    age, name = input().split()
    X_list.append((int(age), name))  # (나이, 이름) 튜플로 저장

sorted_list = sorted(X_list, key=lambda x: x[0])
for age, name in sorted_list:
    print(f"{age} {name}")