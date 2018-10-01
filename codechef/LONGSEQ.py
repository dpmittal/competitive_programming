#https://www.codechef.com/problems/LONGSEQ
test = int(raw_input())
for i in xrange(test):
    j = list(raw_input())
    if (j.count('1')>1):
        if(j.count('0')==1):
            print "Yes"
        else:
            print "No"
    elif(j.count('0')>1):
        if (j.count('1')==1):
            print "Yes"
        else:
            print "No"
    else:
        if(j.count('1')==1 or j.count('0')==1):
            print "Yes"
        else:
            print "No"     
