Import abc

class Person(metaclass=abc.ABCMeta):
    def __init__(self, age=1):
        self.age = age

    @abc.abstractmethod
    def drive(self):
        pass

class Baby(Person):
    def __init__(self, age=1):
        if age < 18:
            super().__init__(age)
        else:
            raise ValueError

class Adult(Person):
    def __init__(self, age=18):
        if age >= 18:
            super().__init__(age)
        else:
            raise ValueError

baby = Baby()
adult = Adult()



class Car(object):
    def __init__(self, model=None):
        self.model = model
    def run(self):
        print('run')

    def run(self):
        print(self.model, 'run')

    def ride(self, person):
        person.drive()








class ToyotaCar(Car):
    def run(self):
        print(self.model, 'toyota: run')

class TeslaCar(Car):
    def __init__(self, model='Model S', enable_auto_run=False):
        # self.model = model
        super().__init__(model)

        # _をつけることによって，外から値を変更することができなくなる
        self._enable_auto_run = enable_auto_run

    # propertyを付けることによって，読み込みは出来るが設定は出来ないとなる
    @property
    def enable_auto_run(self):
        return self._enable_auto_run

    # 条件によって分岐させたいとき，setterを用いる
    @enable_auto_run.setter
    def enable_auto_run(self, is_enable):
        self.enable_auto_run = is_enable

    def run(self):
        print(self.model, ': super fast')

    def auto_run(self):
        print(self.model, 'tesla: auto run')

car = Car()
car.run()

car.ride(adult)

toyota_car = ToyotaCar('lexus')
toyota_car.run()

tesla_car = TeslaCar('Model S')
tesla_car.run()
tesla_car.auto_run()

# tesla_car.enable_auto_run = True
# print(tesla_car.enable_auto_run)

# __ <= クラス内からでしかアクセスできない
# _ <= 外部からアクセス出来るけど，書き換えできない



# データ構造体として扱うこともできちゃうけどおすすめされない。
