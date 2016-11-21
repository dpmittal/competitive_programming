#https://www.codechef.com/problems/TWOSTR/
x = int(raw_input())
for i in xrange(x):
	a = raw_input()
	b = raw_input()
	t = True
	for j in xrange(len(a)):
		if a[j]==b[j] or a[j]=='?' or b[j]=='?':
			t = True
		else:
			t = False
			break
	if t==True:
		print "Yes"
	else:
		print"No"
