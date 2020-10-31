m,n = map(int,input().split())
DataMatrixA = []
DataMatrixB = []
SumMatrix = []
All = []
if (m >= 1 and n >= 1) and (m <= 100 and n <= 100):
    for i in range(0,m):
        x = list(map(int,input().split(' ')))
        DataMatrixA.append(x)
    for i in range(0,m):
        y = list(map(int,input().split(' ')))
        DataMatrixB.append(y)
for i in range(0,m):
    for j in range(0,m):
        SumMatrix.append(DataMatrixA[i][j]+DataMatrixB[i][j])
for i in range(0,m):
    a = []
    for j in range(0,m):
        a.append(SumMatrix[j])
        if j == m-1 :
            All.append(a)
    for j in range(0,m):
        SumMatrix.pop(0)      
for i in range(0,m):
    print(*All[i])

