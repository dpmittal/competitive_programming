itr = int(raw_input())
for i in xrange(0,itr):
	inp = raw_input()
	l = len(inp)
	k =0
	for j in xrange(0,l):
		if inp[j]=='A' or inp[j]=='D' or inp[j]=='O' or inp[j]=='P' or inp[j]=='Q' or inp[j]=='R' :
			k+=1
		elif inp[j]=='B':
			k+=2
	print k 
