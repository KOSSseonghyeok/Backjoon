count = int(input())
ls = sorted(list(map(int, input().split())))
n = int(input())
cnt = 0
if n < ls[0]:
    for j in range(1, n+1):
        for k in range(n, ls[0]):
            if j < k:
                cnt += 1

for i in range(count-1):
    if ls[i] < n < ls[i+1]:
        for j in range(ls[i]+1, n+1):
            for k in range(n, ls[i+1]):
                if j == k:
                    continue
                cnt += 1
print(cnt)