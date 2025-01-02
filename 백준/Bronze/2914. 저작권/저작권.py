#곡의 개수 A , 평균값 I
A, I = map(int, input().split())
# 멜로디의 최솟값을 구하는 공식 > 개수 * (평균값 -1) +1
M = A * (I-1) +1
print(M)