n=int(input())
coins=n//10
n=n%10
coins+=n//5+n%5
print(coins)
