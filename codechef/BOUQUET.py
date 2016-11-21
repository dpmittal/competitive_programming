#https://www.codechef.com/problems/BOUQUET/
itr = int(raw_input())
for i in xrange(itr):
	o =[]
	a = raw_input().split()
	a = [int(s) for s in a]
	b = raw_input().split()
	b = [int(s) for s in b]
	c = raw_input().split()
	c = [int(s) for s in c]
	if(sum(a)%2==0):
		o.append(sum(a)-1)
	else:
		o.append(sum(a))
	if(sum(b)%2==0):
		o.append(sum(b)-1)
	else:
		o.append(sum(b))
	if(sum(c)%2==0):
		o.append(sum(c)-1)
	else:
		o.append(sum(c))
	k = a[0]+b[0]+c[0]
	l = a[1]+b[1]+c[1]
	m = a[2]+b[2]+c[2]
	if(k%2==0):
		o.append(k-1)
	else:
		o.append(k)
	if(l%2==0):
		o.append(l-1)
	else:
		o.append(l)
	if(m%2==0):
		o.append(m-1)
	else:
		o.append(m)
	if(max(o)<0):
		print 0
	else:
		print max(o)
