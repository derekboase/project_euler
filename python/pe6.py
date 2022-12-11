from math import pow
from os import system
system('cls')

def squares_and_sums(num):
    sum_square = 0
    square_sum = 0
    for i in range(1, num + 1):
        square_sum += i
        sum_square += int(pow(i, 2))
    return sum_square, int(pow(square_sum, 2))

if __name__ == '__main__':
    vals = squares_and_sums(100)
    print(vals[1] - vals[0])