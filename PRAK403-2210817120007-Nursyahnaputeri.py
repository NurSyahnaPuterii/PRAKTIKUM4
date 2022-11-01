k, n = input ().split ()
k = int (k)
n = int (n)
if k < n :
    i = k; j = n
    while i <= n and j >= k :
        print ("%d %d"%(i, j), end= ' ')
        if i == n : 
            break
        else :
            print (" - ", end= ' ')
            i += 1; j -= 1
else :
    i = k ; j = n
    while i >= n and j <= k :
        print ("%d %d"% (i, j), end= ' ')
        if i == n :
            break
        else :
            print (" - ", end= " ")
            i -=1; j+=1
print ("\n")