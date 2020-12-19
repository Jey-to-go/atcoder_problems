import random
from typing import List

# 一個ずつ比べていき，隣よりも大きい時点で終了
def in_order(numbers: List[int]) -> bool:

    for i in range(len(numbers)-1):   # for (int i=0; i<5-1; i++)  こういうこと！4は含まれないから，iは3まで参照するよ！
        if numbers[i] > numbers[i+1]:
            return False

    return True
    # return all(numbers[i] <= numbers[i+1] for i in range(len(numbers)-1)) でも可能


# シャッフルした結果が整列しているかどうかを確かめるアルゴリズム
def bogo_sort(numbers: List[int]) -> List[int]:
    while not in_order(numbers):
        random.shuffle(numbers)
    return numbers


# 10個入れてる
num = [random.randint(0, 1000) for _ in range(10)]
print(num)
print(bogo_sort(num))

# 結構時間がかかり，大変…
