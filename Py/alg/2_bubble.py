from typing import List

def bubble(numbers: List[int]) -> List[int]:
    len_numbers = len(numbers)
    for i in range(len_numbers):
        for j in range(len_numbers - 1 - i):
            if numbers[j] > numbers[j+1]:
                numbers[j], numbers[J+1] = numbers[j+1], numbers[j] # 値を入れ替えるやつ

    return numbers

num = [random.randint(0, 1000) for _ in range(10)]
print(num)
print(bubble_sort(num))
