count = int(input())
for i in range(1, count+1):
    A, B = map(int, input().split())
    print(f"Case #{i}:", f"{A} + {B} =", A+B)