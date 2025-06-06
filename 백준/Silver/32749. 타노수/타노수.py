def Tanos(strNumberX, n, t):
    result = 0
    maxNum = 0
    chunk_size = 2**(n - t)
    for i in range(2**t):
        start = chunk_size * i
        end = chunk_size * (i + 1)
        chunk_str = strNumberX[start:end]
        if not chunk_str:
            continue  # 슬라이스 범위를 벗어나면 건너뜀
        result = int(chunk_str)
        if result > maxNum:
            maxNum = result
    return maxNum
N, T = map(int, input().split())
NumberX = input()
print(Tanos(NumberX,N,T))