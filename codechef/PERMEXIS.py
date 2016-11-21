#https://www.codechef.com/problems/PERMEXIS
itr = int(raw_input())
for i in xrange(itr):
	a = int(raw_input())
	b = raw_input().split()
	b = [int(s) for s in b]
	b = sorted(set(b))
	a = len(b)
	if((b[a-1]-b[0])<=(a-1)):
		print "YES"
	else:
		print "NO" 
