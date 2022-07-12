count = int(input())
for i in range(count):
    a = 0
    ls = list(map(int, input().split()))
    cnt = ls[0]
    ave = sum(ls[1:])/cnt
    for j in ls[1:]:
        if j > ave:
            a += 1
        else:
            continue
    total = str(round((a/cnt*100), 3))
    if len(total.split('.')[1]) == 1:
        total += "00"
        print(f"{total}%")
    elif len(total.split('.')[1]) == 2:
        total += "0"
        print(f"{total}%")
    else:
        print(f"{total}%")