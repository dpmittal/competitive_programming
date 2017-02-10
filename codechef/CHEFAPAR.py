#https://www.codechef.com/FEB17/problems/CHEFAPAR
itr = int(raw_input())
for i in xrange(itr):
    a = int(raw_input())
    b = raw_input().split()
    b = [int(s) for s in b]
    n = 0
    p = 0
    for j in b:
        if j==0:
            n+=1
        else:
            if n>0:
                n+=1
            p+=1
    total = (a-p)*1000 + n*100
    print total
