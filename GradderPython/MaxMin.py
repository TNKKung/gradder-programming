n = int(input())

GroupData = []
if n >= 1 and n <= 1000:
    for i in range(1,n+1):
        data = int(input())
        GroupData.append(data)
    print(min(GroupData))
    print(max(GroupData))