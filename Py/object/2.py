class Car(object):
    def __init__(self, model=None):
        self.model = model
    def run(self):
        print('run')

    def run(self):
        print(self.model, 'run')

class ToyotaCar(Car):
    def run(self):
        print(self.model, 'toyota: run')

class TeslaCar(Car):
    def __init__(self, model='Model S', enable_auto_run=False):
        # self.model = model
        super().__init__(model)
        self.enable_auto_run = enable_auto_run

    def run(self):
        print(self.model, ': super fast')

    def auto_run(self):
        print(self.model, 'tesla: auto run')

car = Car()
car.run()

toyota_car = ToyotaCar('lexus')
toyota_car.run()

tesla_car = TeslaCar('Model S')
tesla_car.run()
tesla_car.auto_run()
