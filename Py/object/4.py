# フィールドの変数
class T(object):
    words = []

    def add_word(self, word):
        self.words.append(word)


c = T()
c.add_word('add 1')
c.add_word('add 2')

d = T()
c.add_word('add 3')
c.add_word('add 4')

print(c.words)

class Person(object):
    kind = 'human'

    def __init__(self):
        self.x = 100

    @classmethod
    def what_is_your_kind(cls):
        return cls.kind

    @staticmethod
    def about(year):
        print('about human {}'.format(year))

a = Person()
print(a.what_is_your_kind())

b = Person
print(b.what_is_your_kind())

Person.about(1999)

class Word(object):

    def __init__(self, text):
        self.text = text

    # javaのtoStringてきな
    def __str__(self):
        return 'Word!!!!!'

    def __len__(self):
        return len(self.text)

    def __add__(self, word):
        return self.text.lower() + word.text.lower()

    def __eq__(self, word):
        return self.text.lower() == word.text.lower()

w = Word('test')
print(w)
print(len(w))

w = Word('test')
w2 = Word('test')

print(w + w2)
print(w == w2)
