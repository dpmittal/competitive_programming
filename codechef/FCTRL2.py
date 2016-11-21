itr = int(raw_input())
array = []
for i in xrange(0,itr):
 no= int(raw_input())
 k = 1
 for j in xrange(1,(no+1)):
  k = k * j
 array = array + [k]
for i in xrange(0,itr):
 print(array[i]) 
