# Card Game for Two

x = int(input())
num_list = list(map(int, input().split()))

num_list = sorted(num_list, reverse=True)

# print(num_list)

Alice = 0
Bob = 0

for i in range(x):
    if i%2==0:
        Alice += num_list[i]
    else:
        Bob += num_list[i]

print(Alice - Bob)
