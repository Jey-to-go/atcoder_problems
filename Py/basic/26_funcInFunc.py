def outer(a, b):

    def plus(c, d):
        return c + d

    r1 = plus(a, b)
    r2 = plus(b, a)

    print(r1 + r2)

outer(1, 2)

# こんなこともできる
# 最初に値を設定して，あともっかい値を設定したいときとか
def circle_area_func(pi):
    def circle_area(radius):
        return pi * radius * radius

    return circle_area

ca1 = circle_area_func(3.14)
ca2 = circle_area_func(3.141592)

print(ca1(10))
print(ca2(10))