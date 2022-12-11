from math import sqrt
from os import system 
system('cls')

def is_prime(num):
    if num == 2: return True
    elif not(num%2): return False
    else:
        for i in range(3, int(sqrt(num)) + 1, 2):
            if(not(num%i)): return False
        return True

if __name__ == '__main__':
    MAX_VAL = 20
    result = 1
    for i in range(2, MAX_VAL + 1):
        if is_prime(i):
            temp = i
            while (temp*i) < MAX_VAL: temp *= i
            result *= temp
    print(result)