n,y = map(int,input().split())
f = False
for i in range(n+1):
    for j in range(n-i+1):
        if 10000 * i + 5000 * j + (n-i-j) * 1000 == y:
            f = True
            print(i,j,n-i-j)
            break
    if f :
        break
if f == False :
    print("-1 -1 -1")