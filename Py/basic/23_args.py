# まとめてタプルに入れる方法
def say_something(*args):
    print(args)

    for arg in args:
        print(arg)

say_something('Hi!', 'Mike', 'Nance')

# 以下のように使ったりする．
# 第二引数以降はまとめてタプルへ
def say_something2(word, *args):
    print('word =', word)

    for arg in args:
        print(arg)

say_something2('Hi!', 'Mike', 'Nance', 'Owe')

# こんなことも出来る．
t = ('Mike', 'Nancy')
say_something('Hi!', *t)
