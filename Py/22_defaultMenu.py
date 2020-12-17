def menu(entree = 'beef', drink = 'wine', dessert = 'ice'):
    print('entree = ', entree)
    print('drink = ', drink)
    print('dessert = ', dessert)

# defaultはこのようにして変えることが出来る
menu(entree='chiken')


# 注意点
def test_func(x, l=[]):
    l.append(x)
    return l

# 空の配列にxを入れる
r = test_func(100)
print(r)
# [100]

# 同様にして空の配列にxを入れる
r = test_func(100)
print(r)
# [100, 100]

# このように何度も呼ぶと同じ配列に何度も入れるようになってしまうので，注意
# なのでpythonでは入れないことが暗黙の了解になっている．
# よって上記のような処理を行いたい場合，このように書くのがよい．
def test_func(x, l=None):
    if l is None:
        l = []
    l.append(x)
    return l
