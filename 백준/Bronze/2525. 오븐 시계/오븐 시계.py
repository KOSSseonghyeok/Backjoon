ls = list(map(int, input().split()))
hour = ls[0]
min = ls[1]
plusm = int(input())
if min + plusm < 60:
    fix_hour = hour
    fix_min = min + plusm 
else:
    fix_hour = hour
    fix_min = min + plusm 
    while fix_min >= 60:
        fix_hour += 1
        fix_min -= 60
        if fix_hour == 24:
            fix_hour = 0
print(fix_hour, fix_min)