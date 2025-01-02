num = int(input())
N = 2
while num != 1:
    if num % N == 0:  # N이 num의 인수인지 확인
        print(N)
        num = num // N  # num을 N으로 나눈 값으로 재할당
    else:
        N += 1  # N이 인수가 아니면 N을 증가