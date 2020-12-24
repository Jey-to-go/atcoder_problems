# 標準的なやり方
i = 0
for fruit in ['apple', 'banana', 'orange']:
    print(i, fruit)
    i += 1

# enumerate func
# iとそれぞれの要素を関連付けてくれる
for i, fruit in enumerate(['apple', 'banana', 'orange']):
    print(i, fruit)
