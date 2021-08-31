'''
Description:
Secventa de cautat.
Se citeste de la tastatura un numar natural cu cel mult 100 de cifre. Determinati
cea mai lunga secventa de cifre consecutive, pozitia de inceput a acesteia si
continutul. In caz ca exista mai multe secvente de aceeasi dimensiune maxima,
afisati-o pe prima din sir.

Input:
777123411177
Output:
Lungimea maxima: 4
Prima pozitie: 4
Subsirul: 1234
'''
def search( s ):
    iMax = 0
    lMax = 1
    iCurr = 0
    i = 0
    n = len(s)

    while i < n:
        if i - iCurr > lMax:
            lMax = i - iCurr
            iMax = iCurr

        iCurr = i

        while i < n - 1 and int(s[i]) + 1 == int(s[i+1]):
            i += 1
        i +=1

    return [iMax, lMax]

def main():

    num = input("Number = ")
    print("Number =", num)
    iMax, lMax = search(num)
    print("Start Position:", iMax)
    print("Length:",lMax)
    print("Subsequence:", end ="")
    for i in range(iMax, iMax + lMax):
        print(num[i], end = "")
    print()
main()
