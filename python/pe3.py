from math import sqrt
from os import system
system('cls')

def is_prime(num):
    for i in range(3, int(sqrt(num)) + 1, 2):
        if(not(num%i)): return False
    return True

TARGET = 600851475143
SQRT_TAR = int(sqrt(TARGET))
for i in range(3, SQRT_TAR, 2):
    if(is_prime(i) and not(TARGET%i)): max_val = i

print(max_val)