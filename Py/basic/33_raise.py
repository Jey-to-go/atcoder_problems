# 自分でupperクラスを作成したいとき
# pass => Exceptionを投げる？
class UppercaseError(Exception):
    pass

def check():
    words = ['apple', 'orange', 'banana']
    for word in words:
        if word.isUpper():
            raise UppercaseError(word)

try:
    check()
except UppercaseError as exc:
    print('this is my fault')
