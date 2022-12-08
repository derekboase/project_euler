from os import system
system("cls")

def calculate_fib(lst):
    lst[0:2] = lst[1:]
    lst[2] = lst[0] + lst[1]
    

fib = [1, 2, 3]
sum = 2

while fib[2] < 4000000:
    calculate_fib(fib)
    if not(fib[2]%2):
        sum += fib[2]
print(sum)