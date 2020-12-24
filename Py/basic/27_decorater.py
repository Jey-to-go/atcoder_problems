# def add_num(a, b):
#     return a + b

# print('start')
# r = add_num(10, 20)
# print('end')

# print(r)

# print('start'), print('end')を1つの関数にまとめたい…
# つまりは関数をdecorateしたいなぁ…
# 以下のようにする
def print_more(func):
    def wrapper(*args, **kwargs):
        print('func:', func.__name__)
        print('arg:', args)
        print('kwargs:', kwargs)

        result = func(*args, **kwargs)
        print('result:', result)

        return result
    return wrapper

def print_info(func):
    def wrapper(*args, **kwargs):
        print('start')
        result = func(*args, **kwargs)
        print('end')

        return result
    return wrapper

@print_info
@print_more
def add_num(a, b):
    return a + b

# 自動的に行ってくれるゾイ
r =  add_num(10, 20)
print(r)

# @なしだと以下のようになるゾイ
# f = print_info(print_more(add_num))
# r = f(10, 20)
# print(r)
