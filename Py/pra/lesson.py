import lesson_package.talk.animal

import config # configの名前が表示されている

def main():
    lesson_package.talk.animal.sing()


# 上記を以下の様にして書くことも出来る
# from lesson_package import utils
# r = utils.say_twice('hello')

# こんな書き方も出来るけど，あまり好まれない
# from lesson_package.utils import say_twice
# r = say_twice('hello')
# utils.say_twiceのほうがpackageから呼び出している感があるから，そっちのほうがよい

# こんな書き方も出来るけど，あまり好まれない
# from lesson_package import utils as u
# r = u.say_twice('hello')

# 例外処理をもちいてこんなことも出来ます。
# try:
#     from lesson_package import utils
# except ImportError:
#     from lesson_package.tools import utils

# print(human.sing())
# print('lesson:', __name__)

# if __name__ == '__main__':
#     main()
# print('lesson:', __name__)
# __name__がある時点でグローバルから呼び出される
# ここから呼び出すと
# animalの__name__にはlesson_package.talk.animalが格納され
# configの__name__にはconfigが格納される
# import文を読み込むと同時に，そのファイルの__name__が呼び出される
# ほんでそのファイルのグローバルな領域全部読み込んじゃう
# だから if __name__ == '__main__': って書いたりするの
# ここから
