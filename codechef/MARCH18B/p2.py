itr = int(input())
for i in range(itr):
    n, d = input().split()
    k = int(n)
    n  = list(n)
    n.sort()
    l = int(''.join(n[:-1]) + d)
    print(min(l,k))
