a = input()
b = input()
b = b[::-1]
sum_ = 0
count = 0
for i in b:
    num = int(i)*int(a)
    sum_ += (int(i) * int(a))*(10**count)
    print(num)
    num = 0
    count += 1
print(sum_)
