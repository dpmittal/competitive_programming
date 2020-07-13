itr = int(input())
for i in range(itr):
    k = int(input())
    d = 10*(2**(k-1))
    print(d%1000000007)
