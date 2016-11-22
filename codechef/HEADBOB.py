#https://www.codechef.com/problems/HEADBOB/
itr = int(raw_input())
for i in xrange(itr):
	a = int(raw_input())
	b = list(raw_input())
	n = b.count('N')
	i = b.count('I')
	y = b.count('Y')
	if n==a :
		print "NOT SURE"
		continue
	else:
		if(i>0 and y==0):
			print "INDIAN"
		elif (i==0 and y>0):
			print "NOT INDIAN"
		else:
			print "NOT SURE"
