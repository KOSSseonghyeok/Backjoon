def d(n):
    sum_ = n
    n = str(n)  
    for i in n:
        i = int(i)
        sum_ += i
    return sum_
ls = [x for x in range(10001)]
ls2 = [x for x in range(10001)]
for j in range(10001):
    if d(j) in ls:
        ls.remove(d(j))
for k in ls:
    print(k)