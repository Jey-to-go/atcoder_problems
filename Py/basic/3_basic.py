
print("I don't know") # ok

# print('I don't know') ← ダメ
print('I don\'t know') # ok
# C:
# ame
# ack

print(r"C:\name\nack")

print("""
line1
line2
line3
line4
""")

# line1
# line2
# line3

# 最初と最後に改行がついているので，
# 最初の改行を無くしたいときは
print("""/
line1
line2
line3
line4
""")

#  とするとよい
# スラッシュでここから始めますよ，みたいな

# 連続表示
print('Hi.' * 3)
# Hi.Hi.Hi.

# javaでやるやつ
print("hello" + " python")
# hello python

# これも上と同じ．()内で文字列を並べるだけ
print("hello"" python")
# hello python

# 変数と文字列を並べるのはできない
prefix = 'Py'
# print(prefix 'thon')
# error

# 正しくは
print(prefix + 'thon')

#  長い文章をまとめたいときに文字列を並べる奴を使う
s = ('aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa'
    'bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb')

# 上と同じです
# s = 'aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa'\
#     'bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb'

print(s)
# aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb

# 12. 文字列のインデックスとスライス
word = 'python'
print(word[0]) # p
print(word[1]) # y

# 添え字を負にすると後ろから
print(word[-1]) # n
print(word[-2]) # o

print(word[0:2]) # py
print(word[2:2]) # tho

print(word[:2]) # py (最初の文字を省略できる)

print(word[2:]) # thon 二番目から最後まで

# 書き替えたいとき
# word[0] = 'j' これは出来ない．こういうときは
word = 'j' + word[1:]
print(word) # jython

word = 'python'

# 最初から最後までを現す
print(word[:])

# 長さを現す
n = len(word)
print(n) # 6




# 13. 文字のメソッド--------------------------------------------
s = 'My name is Mike. Hi Mike'

# 初めの文字を確認するメソッド
is_start = s.startswith('My')
print(is_start) # True
is_start = s.startswith('X')
print(is_start) # False

# その文字が文字列に含まれているか確認するメソッド
print(s.find('Mike')) # 11

# 文字列の右端から探して，最初に来る指定の文字が左からどこにあるかを示すメソッド
print(s.rfind('Mike')) # 20

# Mikeの文字列の数を数える
print(s.count('Mike')) # 4


print(s.capitalize()) # My name is mike. hi mike
print(s.title()) # My Name Is Mike. Hi Mike
print(s.upper()) # MY NAME IS MIKE. HI MIKE
print(s.lower()) # my name is mike. hi mike
print(s.replace('Mike', 'Nancy')) # My name is Nancy. Hi Nancy

# 14, 15 f-strings型------------------------------
# 最初にfとかくことで，文字列の中に変数を代入できる

a = 'a'
print(f'a is {a}')

x, y, z = 1, 2, 3
print(f'a is {x}, {y}, {z}')
print(f'a is {z}, {y}, {x}')

name = 'Jun'
family = 'Sakai'
print(f'My name is {name} {family}. Watashi ha {family} {name}')


