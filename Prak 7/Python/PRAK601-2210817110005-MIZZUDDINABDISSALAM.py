klm, brs = map(int, input().split())
angka = list(map(int, input().split()))
matrik = []
a = 0
for i in range(klm) :
    matrik.append(angka[a : a + brs])
    a = a + brs
for klm in matrik :
    for angka in klm :
        print(angka, end=' ')
    print()
