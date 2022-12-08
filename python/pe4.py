from os import system
from math import pow
system('cls')

def is_pal(num):
    for idx in range(len(str(num))//2):
        if str(num)[-(idx + 1)] != str(num)[idx]: return False
    return True

large_pal = 0

for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        prod = i*j
        if(is_pal(prod) and (prod > large_pal)): large_pal = prod
print(large_pal)