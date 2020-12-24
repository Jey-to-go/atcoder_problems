# 以下の二つでも可能
# class Person()
# class Person

class Person(object):

    # コンストラクタ
    def __init__(self, name):
        self.name = name
        print(self.name)

    def say_something(self):
        print('I am {}. hello'.format(self.name))
        self.run(10)

    def run(self, num):
        print('run' * num)

    # もうインスタンスを使わないと判断したら呼び出される
    def __del__(self):
        print('good bye')


person = Person('Mike')
person.say_something()

# 明示的にpersonインスタンスを削除するとき
del person

print('############')
