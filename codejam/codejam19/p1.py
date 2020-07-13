itr = int(input())
for i in range(itr):
    n = list(input())
    ans1=[]
    ans2 = []
    for j in n:
        if j=='4':
            ans1.append('1')
            ans2.append('3')
        else:
            ans1.append('0')
            ans2.append(j)
    ans1 = ''.join(ans1)
    ans2 = ''.join(ans2)
    ans1 = int(ans1)
    ans2 = int(ans2)
    out = "Case %d: %d %d", (i+1, ans1, ans2)
    print("Case %d: %d %d" %(i+1, ans1, ans2))
