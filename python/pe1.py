from os import system
system('cls')

upper_lim = int(input('Find sum of all divisible numbers below: '))
print(upper_lim)

sum = 0
for num in range(3, upper_lim):
    if not(num%3 and num%5):
        sum += num
print(f'The answer is {sum}')