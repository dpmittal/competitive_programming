#https://www.codechef.com/problems/TRICOIN/
from math import sqrt
itr = int(raw_input())
for i in xrange(itr):
    n = int(raw_input())
    j = int(sqrt(n*2))
    while (j>0):
        if (j*(j+1)/2)<=n:
            print j
            break
        j-=1
