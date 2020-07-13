ifile = input("Input File-\n")
ofile = input("Output File-\n")
inp = open(ifile)
out = open(ofile, 'w')
out.truncate()
n = int(inp.readline())
out.write(str(n))
out.write("\n")
tags = []
for i in range(n):
    l = inp.readline().split()
    code = l[0]
    count = l[1]
    l = l[2:]
    tags.append(set(l))
for i in range(1, n):
    ma = len(tags[i-1])
    ind = i-1
    for j in range(n):
        if(i!=j):
            if(len(tags[j].union(tags[i-1]))>ma):
                ma = len(tags[j].union(tags[i-1]))
                ind = j
    out.write(str(ind)+"\n")
