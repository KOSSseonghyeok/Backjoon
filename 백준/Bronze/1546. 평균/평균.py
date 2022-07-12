count = int(input())
p = list(map(int, input().split()))
M = max(p)
ls = []
for i in p:
    ls.append(i/M*100)
print(sum(ls)/count)