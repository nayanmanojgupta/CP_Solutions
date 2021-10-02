for _ in range(int(input())):
    s = input()
    r=''
    for i in range(len(s)):
        if i%2==0:
            if s[i]=='a':
                r+='b'
            else:
                r+='a'
        else:
            if s[i]=='z':
                r+='y'
            else:
                r+='z'
    print(r)
