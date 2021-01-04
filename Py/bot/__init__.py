import csv
import os

mes = (
'\033[32m' +
"======================================\n" +
"Hello, I am Roboko. What is your name?\n"
"======================================\n" + '\033[0m'
)

print(mes + 'your answer: ', end='')

user_name = input()

if (os.path.exists('ranking.csv')):
    with open('ranking.csv', 'r') as csv_file:
        reader = csv.DictReader(csv_file)



        for row in reader:
            print(row)
            mes = (
'\033[32m' +
"======================================\n" +
f"{user_name}, I recommend {row['Name']} restaurant.\n" +
"Do you like it? [Yes/No]\n"
"======================================\n" + '\033[0m' )

            print(mes + 'your answer: ', end='')

            ans = input()

            if (ans in 'Yes, yes, Y, y'):
                mes = (
'\033[32m' +
"======================================\n" +
f"Oh! you like {row['Name']}!.\n" +
"OK...!\n" +
"======================================\n" + '\033[0m' )
                print(mes)
                break
            elif(ans in 'No, no, N, n'):
                mes = (
'\033[32m' +
"======================================\n" +
f"hmm...you don't like {row['Name']}...\n" +
"======================================\n" + '\033[0m' )
                print(mes)



mes = ('\033[32m' +
"======================================\n" +
f"{user_name}, what restaurant do you like?\n"
"======================================\n" + '\033[0m' )

print(mes + 'your answer: ', end='')
restaurant = input()

mes = ('\033[32m' +
"======================================\n" +
f"{user_name}, thank you very much!!\n" +
"Have a nice day!!\n" +
"======================================\n" + '\033[0m' )

print(mes)

if (os.path.exists('ranking.csv')):
    with open('ranking.csv', 'r+', newline='') as csv_file:
        reader = csv.DictReader(csv_file)

        for row in reader:
            if (row['Name'] == restaurant):
                c = int(row['Count']) + 1
                flag = True

    with open('ranking.csv', 'w+', newline='') as csv_file:

        if not flag:
        value = ['Name', 'Count']
        writer = csv.DictWriter(csv_file, fieldnames=value)
        writer.writerow({'Name': restaurant, 'Count': 1})

    with open('ranking.csv', 'w+', newline='') as csv_file:
        value = ['Name', 'Count']
        writer = csv.DictWriter(csv_file, fieldnames=value)
        writer.writeheader()
        writer.writerow({'Name': restaurant, 'Count': 1})
