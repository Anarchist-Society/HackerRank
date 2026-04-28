# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
phone_book = {}

for _ in range(n):
    name, phone_number = input().split()
    phone_book[name] = int(phone_number)

for _ in range(n):
    name = input()

    if name not in phone_book:
        print("Not found")
    else:
        print(f"{name}={phone_book[name]}")
