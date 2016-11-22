#https://www.codechef.com/problems/TAEDITOR/
import sys
itr = int(sys.stdin.readline())
out = ""
for i in range(0,itr):
	a , b ,c = (sys.stdin.readline()).split()
	b = int(b)
	if a=='+':
		out = out[:b]+c+out[b:]
	elif a=='?':
		c = int(c)
		print out[(b-1):b+c-1]
