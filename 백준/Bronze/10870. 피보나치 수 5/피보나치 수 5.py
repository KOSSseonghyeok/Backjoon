def fibo(n):
    if n <2:
        return n
    f0 = 0
    f1 = 1
    fn = fibo(n-1)
    fm = fibo(n-2)
    return fn + fm
a = int(input())
print(fibo(a))