A,B = map(int,input().split())
C = int(input())
B += C
while (0<=B<60) == False:
    A += 1
    B -=60
else: 
    if(A>=24):
        A -= 24
        print("{} {}".format(A, B)) 
    else:
        print("{} {}".format(A, B)) 