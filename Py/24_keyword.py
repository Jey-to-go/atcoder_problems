# menu関数
def menu(entree='beef', drink='wine'):
    print(entree, drink)

menu(entree='beef', drink='coffee')

print('---reset---')

# 上記のようなものに可変性を持たせたい
def menu(**kwargs):
    for k, v in kwargs.items():
        print(k, v)

menu(entree='beef', drink='coffee')

print('---reset---')

d = {
    'entree': 'beef',
    'drink': 'ice coffee',
    'dessert': 'ice'
}
menu(**d)

print('---reset---')

# こんな書き方も出来てしまう
def menu(food, *args, **kwargs):
    print(food)
    print(args)
    print(kwargs)

menu('banana', 'apple', 'orange', entree='beef', drink='coffee')

# ただし，*の順序を間違えないこと
# def menu(food, **kwargs, *args):
#     print(food)
#     print(args)
#     print(kwargs)

# これはダメ
