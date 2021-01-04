s = """\
AAA
BBB
CCC
DDD
"""


with open('test.txt', 'r') as f:
    # print(f.read())
    # while True:
    #     chunk = 2
    #     line = f.readline(chunk)
    #     print(line)
    #     if not line:
    #         break

    print(f.tell())
    print(f.read(1))

    f.seek(5)
    print(f.read(1))


# with open('test.txt', 'w') as f:
#     f.write(s)
