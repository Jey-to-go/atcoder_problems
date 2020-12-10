r = [1, 2, 3, 4, 5, 1, 2, 3]
print(r.index(3)) # 2

# 3番目以降から3を探してください
print(r.index(3, 3)) # 7

# 3はいくつある？
print(r.count(3)) # 2

# もし3がリストの中にあれば...
if 3 in r:
    print('exist') # exist


# rをソートします
r.sort()
print(r) # [1, 1, 2, 2, 3, 3, 4, 5]

# 条件付きソート
r.sort(reverse=True)
print(r) # [5, 4, 3, 3, 2, 2, 1, 1]

# reverse関数
r.reverse()
print(r) # [1, 1, 2, 2, 3, 3, 4, 5]

s = 'My name is Mike.'
to_split = s.split(' ')
print(to_split) # ['My', 'name', 'is', 'Mike.']

x = '*'.join(to_split)
print(x) # My*name*is*Mike.

# listのヘルプを見よう
print(help(list))
