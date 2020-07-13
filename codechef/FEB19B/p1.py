from math import floor, gcd
itr = int(input())
for i in range(itr):
    l = input().split()
    n,a,b,k = map(int, l)
    cf = (a*b)/gcd(a, b)
    s = int(floor(n/a))+int(floor(n/b))-(2*(int(floor(n/cf))))
    if s>=k and a!=b:
        print("Win")
    else:
        print("No")
