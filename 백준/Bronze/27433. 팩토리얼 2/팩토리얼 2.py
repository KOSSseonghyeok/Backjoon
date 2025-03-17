def Fibo(n):
    if n < 2:
        return 1
    else:
        return n * Fibo(n-1)

n = int(input())
print(Fibo(n))