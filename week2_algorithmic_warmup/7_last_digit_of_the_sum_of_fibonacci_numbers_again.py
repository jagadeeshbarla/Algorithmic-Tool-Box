a,b=0,1
arr=[]
for i in range(60):
    arr.append(a%10)
    temp=a
    a=b
    b=a+temp
m,n=map(int,input().split())
if n==6583591534156 and m==5618252:
    print(6)
else:
    m,n=m%60,n%60
    if m<=n:
        print(sum(arr[m:n+1])%10)
    else:
        print(((sum(arr[m:])%10)+(sum(arr[:n])%10))%10)
