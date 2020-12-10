some_list = [1, 2, 3, 4, 5]

# i = 0
# while i < len(some_list):
#    print(some_list)
#    i += 1

# 上と同じことを行っている
for i in some_list:
    print(i)

for s in 'abvvdc':
    print(s)

for word in ['my', 'name', 'is', 'Mike']:
    if word == 'name':
        break
    print(word)
