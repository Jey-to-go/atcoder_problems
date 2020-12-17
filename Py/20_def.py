def say_something():
    print('Hi')

say_something()
# Hi

print(type(say_something))
# <class 'function'>

# 関数を変数に代入することも出来ちゃう
f = say_something
f()

def get_something():
    s = 'hi'
    return s

result = say_something()
print(result)

def what_is_this(color):
    if color == 'red':
        return 'tomato'
    elif color == 'greed':
        return 'green papper'
    else:
        return "I don't know"

r = what_is_this('red')
print(r)

# こんな書き方も出来るぜ
# ただし，pythonは性質上，この引数にstring型をいれても
# 正常に動いてしまうので注意
num: int = 10
def add_num(a: int, b: int) -> int:
    return a + b
