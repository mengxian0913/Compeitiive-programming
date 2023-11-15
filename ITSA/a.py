t = int(input())

while t > 0:
    t -= 1
    oper = input()
    a = int(input())
    b = int(input())
    if oper == "+":
        print(a + b)
    else:
        print(a - b)
