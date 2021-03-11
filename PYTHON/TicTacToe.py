def printBoard():
    print(" ",a[0]," | ",a[1]," | ",a[2]," \n     |     |   \n———————————————-\n ",a[3]," | ",a[4]," | ",a[5],"  \n     |     |   \n———————————————-\n ",a[6]," | ",a[7]," | ",a[8]," \n     |     |   ")
    print()
    
a=list(range(25,34))
print('\n  ""remember these positions""\n\n')
i=0
for e in a:
    a[i]=str(i+1)
    i+=1
printBoard()    
print()

while True:
    pos=int(input("enter your position :"))
    print()
    if pos>9 or pos<1:
        print("\n\t\tenter valid position\n")
        continue

    i=0
    for e in a:
        i+=1
        if i==pos:
            if a[i-1] != 0 and a[i-1] != 1:
                a[i-1]=1
            else:
                print(120*"—")
                print("\n\n\t\tenter valid position")
                print("\t\tyou have already enter it\n\n")
                print(120*"—")
        elif a[i-1] ==0 or a[i-1]==1:
            continue
        else:
            a[i-1]=" "
    printBoard()
