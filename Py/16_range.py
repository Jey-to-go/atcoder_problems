for i in range(10):
    print(i)

print('reset')

# ２番目から
for i in range(2, 10):
    print(i)

print('reset')

# ２番目から3個飛ばしで
for i in range(2, 10, 3):
    print(i)

# 10回繰り返したいだけでiは用いないっす！ => '_'
for _ in range(10):
    print('hello')
