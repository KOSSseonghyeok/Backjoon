count = int(input())
for l in range(count):
    ls = list(input())
    cnt = 0
    sum_ = 0
    k = 0
    for i in ls:
        if i == 'O':
            cnt += 1
            k += 1
        else:
            for j in range(cnt):
                sum_ += cnt-j
            cnt = 0
            k += 1
        if k == len(ls):
            for j in range(cnt):
                sum_ += cnt-j
    print(sum_)