itr = int(input())
for i in range(itr):
    l = input()
    N, a, b = map(int, l.split())
    l = input().split()
    l = list(map(int, l))
    flag = True
    for j in l:
        if j%b==0 and j%a!=0:
            flag = False
            break
    if flag == True:
        print("BOB")
    else:
        print("ALICE")
