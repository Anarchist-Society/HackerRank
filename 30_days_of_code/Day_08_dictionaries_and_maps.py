# Enter your code here. Read input from STDIN. Print output to STDOUT
def solucion_01():
    n = int(input())
    phone_book = {}

    for _ in range(n):
        name, phone_number = input().split()
        phone_book[name] = int(phone_number)

    while True:
        try:
            name = input()
            print(f"Not found" if name not in phone_book else f"{name}={phone_book[name]}")
        except EOFError:
            break

def solucion_02():
n = int(input())
phone_book = {}

for _ in range(n):
    name, phone_number = input().split()
    phone_book[name] = phone_number

while True:
    try:
        name = input()
        print(f"{name}={phone_book[name]}")
    except KeyError:
        print("Not found")
    except EOFError:
        break
