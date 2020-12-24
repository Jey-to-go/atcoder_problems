days = ['Mon', 'Tue', 'Wed']
fruits = ['apple', 'banana', 'orange']
drinks = ['coffee', 'tea', 'beer']

for i in range(len(days)):
    print(days[i], fruits[i], drinks[i])

# これを以下のようにして簡潔に書ける
for day, fruit, drink in zip(days, fruits, drinks):
    print(day, fruit, drink)
