#https://www.codechef.com/problems/MNMX/
a = int(raw_input())
for i in xrange(a):
	b = int(raw_input())
	a = raw_input()
	a = [int(s) for s in a.split()]
	c = min(a)
	print c*(b-1)
