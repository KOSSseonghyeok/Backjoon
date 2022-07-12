A = int(input())
B = int(input())
C = int(input())
sum_ = str(A*B*C)
ls = list(sum_)
li = []
for i in range(10):
    count = 0
    for j in sum_:
        if int(j) == i:
            count += 1
    li.append(count)
for k in li:
    print(k)