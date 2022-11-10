def foo(n):
    if n == 1 or n == 0:
        return 1 
    return n*foo(n-1)
a =int(input())
print(foo(a))
    