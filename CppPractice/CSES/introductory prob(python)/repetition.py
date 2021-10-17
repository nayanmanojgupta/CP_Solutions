s = input()

cur = ""
cnt = 0
max_cnt = 0


for char in s:
    if char == cur:
        cnt += 1
    else:
        max_cnt = max(cnt, max_cnt)
        cnt = 1
        cur = char

max_cnt = max(cnt, max_cnt)

print(max_cnt)
