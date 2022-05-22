a=0
b=1
n=(int(input())%60)
if n<=1:
    print(n)
else:
    for i in range(2,n+3):
        temp=a
        a=b
        b=(temp+b)%10
    print(b-1)
