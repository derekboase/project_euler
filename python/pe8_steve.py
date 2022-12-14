from os import system
from time import time_ns, sleep 
system('cls')

start = time_ns()
with open('C:/Users/d_boa/OneDrive/Desktop/git_repos/project_euler/problem_8.txt', 'r') as in_file:
    in_data = in_file.readlines()

data = [in_data[i].strip('\n') for i in range (len(in_data))]

data_str = ''

for i in range(len(data)):
    data_str += data[i]

largest = 0
temp_num = 1

for i in range(len(data_str)-13):
    
    for j in range(i,i+13):
        
        temp_num = temp_num * int(data_str[j])

    if temp_num > largest:
        
        largest = temp_num
        
    temp_num = 1
	
print(f'The largest product of 13 adjacent numbers is {largest}')
sleep(1)
print(f'The total run time is {(time_ns() - start)*1e-3}')