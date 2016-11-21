#https://www.codechef.com/problems/CIELRCPT/
a = int(raw_input())
menu = [1,2,4,8,16,32,64,128,256,512,1024,2048]
for i in xrange(a):
  j = 11
  rcpt = 0
  b = int(raw_input())
  while (j>=0):
    rcpt+= b/menu[j]
    k = b%menu[j]
    if (k==0):
      break
    else:
      b = k
      j-=1
  print rcpt
