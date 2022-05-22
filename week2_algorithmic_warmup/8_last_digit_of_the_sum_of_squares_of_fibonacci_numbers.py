a=0
b=1
ans=1
n=int(input())
if n<=1:
    print(n)
else:
    rem=[]
    for i in range(2,32):
        temp=a
        a=b
        b=temp+b
        if b>9:
            b=b%10
        ans+=b*b
        if(ans>9):
            ans=ans%10
        rem.append(ans)
    n=(n%30)-2
    print(rem[n])
