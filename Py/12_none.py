is_empty = None
print(type(is_empty))

# noneタイプの判定は以下のように行う
if is_empty is None:
    print('None!!!')

print(1 == True) # True(真と真なので)
print(1 is True) # False(オブジェクト同士を比較しているため)
print(True is True)
