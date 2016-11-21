#https://www.codechef.com/problems/PPSUM/
itr =int(raw_input())
for i in xrange(itr):
	a,b =raw_input().split()
	b = int(b)
	for j in xrange(int(a)):
		c = [z for z in xrange(1,(b+1))]
		b = sum(c)
	print b
