hour, min, sec = map(int, input().split())
plussec = int(input())
fix_hour = hour
fix_min = min
fix_sec = sec + plussec 
while fix_sec >= 60:
    fix_min += 1
    fix_sec -= 60
    if fix_min == 60:
        fix_min = 0
        fix_hour += 1
        if fix_hour == 24:
            fix_hour = 0
print(fix_hour, fix_min, fix_sec)