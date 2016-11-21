from fractions import gcd
itr = int(raw_input())
for i in xrange(0,itr):
	inp = raw_input()
	a , b = [int(s) for s in inp.split()]
	gc = gcd(a,b)
	print gc 
