from math import floor
itr = int(input())
for i in range(itr):
    l = int(input())
    s = set(['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'])
    for j in range(l):
        k = set(list(input()))
        s = s.intersection(k)
    print(len(s))
