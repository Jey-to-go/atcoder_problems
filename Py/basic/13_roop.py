count = 0

# breakで抜けなければ，else以下を実行
while count < 5:
    print(count)
    if count == 1:
        break;
    count += 1
else:
    print('done')
