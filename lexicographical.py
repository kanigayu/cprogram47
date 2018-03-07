a=[4,5,6,3,1]
n=len(a)
y=0
for i in range(0,n):
     for j in range(i+1,n):
         if(a[i]>a[j]):
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
for i in range(0,n):
     y=y+1
if(y>=1):
   print a
