from random import *

a = [0, 1]
x = 100
adad = 50
num = 1

while adad > 20 and adad < 80:
    adad = 0
    x = 100
    print(num, end = ". ")
    while x > 0 :
        x -= 1
        y = choice(a)
        adad += y
    print(adad)
    num += 1