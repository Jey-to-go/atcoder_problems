# これだと値も同じになってしまう
# x = {'a': 1}
# y = x
# y['a'] = 1000
# print(x)
# print(y)
# {'a': 1000}
# {'a': 1000}

x = {'a': 1}
y = x.copy()
y['a'] = 1000
print(x)
print(y)
# {'a': 1}
# {'a': 1000}

fruits = {
    'apple': 100,
    'banana': 200,
    'orange': 300
}

print(fruits['apple'])

# >>> a = {1, 2, 3, 4, 5, 6}
# >>> type(a)
# <class 'set'>
# >>> b = {2, 3, 3, 6, 7}
# >>> a - b
# aの要素からbの要素を減らす

# {1, 4, 5}
# >>> a & b
# {2, 3, 6}
# >>>

my_friends = {'A', 'B', 'D'}
A_friends = {'B', 'D', 'E'}

print(my_friends & A_friends)
