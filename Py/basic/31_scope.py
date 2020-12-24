"""
aaaaaaaaaaaaaaaaa
"""


animal = 'cat'

def f():
    animal = 'dog'
    print('local:', locals())

f()
print('global:', animal)
print(globals())
