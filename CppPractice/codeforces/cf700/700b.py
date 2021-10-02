import sys
input = sys.stdin.readline
from math import ceil
from math import ceil
for _ in range(int(input())):
    a,b,n = map(int,input().split())
    x = list(map(int,input().split()))
    h = list(map(int,input().split()))
    l=list(zip(x,h))
    l.sort()
    s=0.0
    f=0
    for i in range(n):
        p = ceil(l[i][1]/a)
        b-=(l[i][0]*p)
        if i==n-1:
            f=1
            if b>=1:
                print('YES')
            else:
                if b+l[i][0]>=1:
                    print('YES')
                else:
                    print('NO')
            break
        if b<1:
            f=1
            print('NO')
            break
    if f==0:
        print('YES')
