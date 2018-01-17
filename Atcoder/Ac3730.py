n,a,b = map(int,input().split())
ans = 0;
for i in range(1,n+1):
    sum = 0;
    x = i;
    while x:
        sum += int(x%10);
        x/=10;
    if a <= sum <= b:
        ans+=i;
print("%d" % (ans) );