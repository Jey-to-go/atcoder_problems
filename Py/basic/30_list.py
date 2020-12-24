t = [1, 2, 3, 4, 5]
t2 = (6, 7, 8, 9, 10)

r = []
for i in t:
    r.append(i)

print(r)

# 以下のようにして書くこともできる
# for i in tで繰り返して，iを入れるみたいな
r = [i for i in t]
r = [i for i in t if i % 2 == 0]

print(r)

w = ['mon', 'tue', 'wed']
f = ['coffee', 'milk', 'water']

d = {}
for x, y in zip(w, f):
    d[x] = y

print(d)

d = {x: y for x, y in zip(w, f)}
print(d)

def g():
    for i in range(10):
        yield i

f = 
