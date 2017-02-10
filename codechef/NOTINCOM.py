#https://www.codechef.com/LTIME44/problems/NOTINCOM/
a = int(raw_input())
for i in xrange(a):
    b = raw_input()
    c = raw_input().split()
    c = [int(s) for s in c]
    c = set(c)
    d = raw_input().split()
    d = [int(s) for s in d]
    d = set(d)
    ctr =0
    for j in c:
        if j in d:
            ctr+=1
    print ctr
