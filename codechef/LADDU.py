#https://www.codechef.com/problems/LADDU/
itr = int(raw_input())
for i in xrange(itr):
    a , r = raw_input().split()
    if r=="INDIAN":
        min = 200
    else:
        min=400
    sum = 0
    for j in xrange(int(a)):
        act = raw_input().split()
        if act[0]=="CONTEST_WON":
            if int(act[1])>=20:
                sum+=300
            else:
                sum+=300 + (20-int(act[1]))
        elif act[0]=="TOP_CONTRIBUTOR":
            sum+=300
        elif act[0]=="BUG_FOUND":
            sum+=int(act[1])
        else:
            sum+=50
    print int(sum/min)
