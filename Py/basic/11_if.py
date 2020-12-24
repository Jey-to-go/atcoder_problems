x = 10

if x < 0:
    print('negative')
else:
    print('positive')

a = 1
b = 1
# 基本的に比較演算子は一般のものと変わらない
# ただし，論理演算子はand, or を用いる
print(a > 0 and b > 0)
print(a > 0 or b > 0)

y = [1, 2, 3]
x = 1

# こんな使い方もできる
if x in y:
    print('in')

if 100 not in y:
    print('not in')

# このような使い方は基本的に避ける
if not a == b:
    print('Not equal')

# ただしBoolean型ではよく使う
# int, string, リストでも，その値が存在するか？中身があるか？を判定するために
# if is_ok:
# の書き方ができる
is_ok = True
if not is_ok:
    print('hello')
