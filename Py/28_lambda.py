l = ['Mon', 'Tue', 'Wed', 'Thu', 'fri', 'sat', 'sat', 'Sun']

def change_words(words, func):
    for word in words:
        print(func(word))

def sample_func2(word)

# def sample_func(word):
#     return word.capitalize()

# lambda 引数: 処理内容
# これで関数の役割を持つようになる
# いちいち関数を定義しなくてよいので，本当に単純な機能を付け加えるだけのときは，これを使うのが良い．
sample_func = lambda word: word.capitalize()
change_words(l, lambda word: word.capitalize())

# change_words(l, sample_func)
