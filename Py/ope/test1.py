# withStatement
with open('test.txt', 'w') as f:
    f.write('test\n')
    print('I am print', file = f)
