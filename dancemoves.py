for i in range(int(input())):
    x,y = map(int,input().split())
    if x==y:
        print("0")
    elif x<y:
        diff = y-x
        if diff%2 == 0:
            print(diff//2)
        else:
            print((diff//2) +2)

    else:
        diff = x-y
        print(diff)
