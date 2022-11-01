k = int (input ())
karakter  = str (input ())

for i in range (1, 50+1):
    if (i%k)== 0 :
        print (karakter, end=' ')
    else :
        print (i, end=' ')

print ("\n")