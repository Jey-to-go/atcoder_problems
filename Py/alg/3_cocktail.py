import random
from typing import List

def cocktail_sort(numbers: List[int]) -> List[int]:
    len_numbers = len(numbers)
    swapped = True

    start = 0
    end = len_numbers - 1

    while swapped:
        swapped = False
        for i in range(start, end):
            if numbers[i] > numbers[i+1]:
                numbers[i], numbers[i+1] = numbers[i+1], numbers[i]
                swapped = True

        # 一回でも切り替えればTrueとなるので，一回も切り替わらない→全てソートされているということ。
        if not swapped:
            break

        swapped = False
        end = end - 1

        for i in range(end-1, start-1, -1):
            if numbers[i] > numbers[i+1]:
                numbers[i], numbers[i+1] = numbers[i+1], numbers[i]
                swapped = True

        start = start + 1

    return numbers

num = [random.randint(0, 1000) for _ in range(10)]
print(num)
print(cocktail_sort(num))
