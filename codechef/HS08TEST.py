inp = raw_input().strip()
a , b = [float(s) for s in inp.split()]
if a%5==0 and b>(a+0.5):
	print b-(a+0.50)
else:
	print b 
