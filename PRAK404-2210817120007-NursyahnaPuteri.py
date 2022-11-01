p = int
while p !=5 :
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    p = int (input ("Masukan Pilihan : "))
    
    if p > 5 :
        print ("Input anda salah, silahkan coba lagi\n")
    elif p ==5  :
        print ("Terimakasih, telah menggunakan kalkulator Nursyahna Puteri\n")
    else :
            x = float (input("Masukan nilai pertama :")) 
            y = float (input("Masukan nilai kedua:")) 
        
    if p==1 :
        jumlah = x + y
        print ("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n"% (x, y, jumlah))
    elif p==2 :
        kurang = x - y
        print ("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n"% (x, y, kurang))
    elif p==3 :
        kali = x * y
        print ("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n"% (x, y, kali))
    elif p==4 :
        bagi = x / y 
        print ("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n"%(x, y, bagi))