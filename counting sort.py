import sys
n=input()
arr=[]
for i in range(0,n):
    arr.append(input())
cnn=[]
for i in range(0,n+1):
    cnn.append(0)
for i in range(0,n):
    cnn[arr[i]]+=1
for i in range(0,n+1):
    if(cnn[i]):
        for j in range(cnn[i]):
            print i,
