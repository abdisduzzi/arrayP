brs1, brs2 = map(int, input().split())
if brs1 == brs2 :
    angka1 = list(map(int, input().split()))
    angka2 = list(map(int, input().split()))
    baris1 = []
    baris2 = []
    a = 0
    baris1.append(angka1[a : a + brs1])
    baris2.append(angka2[a : a + brs2])
    for i in range(0, brs1) :
        print(baris1[0][i] * baris2[0][i], end=' ')
else :
    print("Jumlah tidak sama")
