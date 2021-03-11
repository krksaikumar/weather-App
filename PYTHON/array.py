from array import*
arr=array('i',[ ])
l=int(input("enter length :"))
for i in range(l):
    print("enter value (",i+1,")")
    a=int(input())
    arr.append(a)
se=int(input("enter the search value: "))    
for i in range(len(arr)):
    if arr[i]==se:
        print("index is :",i)
        break
else:
    print(se,"is not there")
        