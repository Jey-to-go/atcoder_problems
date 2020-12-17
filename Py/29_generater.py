l = ['Good morning', 'Good afternoon', 'Good night']

for i in l:
    print(i)

print("############")

# yieldにそれぞれ保存して，nextで少しずつ出す，
# という感じなのかな
def greeting():
    yield 'Good morning'
    yield 'Good afternoon'
    yield 'Good night'

g = greeting()
print(next(g))
