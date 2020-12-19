l = [1, 2, 3]
i = 5

# try:
#     l[i]
# except:
#     print("Don't Worry")


try:
    print(l[2])
except IndexError as ex:
    print('Index')
except Exception as ex:
    print('Exception')
else:
    print('done')
finally:
    print('clean up')


