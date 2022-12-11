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
    HIGHEST_PRIME = 10001
    primes = 1
    num = 1
    while(primes < HIGHEST_PRIME):
        num += 2
        if(is_prime(num)): primes += 1
    print(num)
