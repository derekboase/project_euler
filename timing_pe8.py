import numpy as np 

from time import time_ns, sleep
from os import system 

system("cls")

start = time_ns()
path = "C:/Users/d_boa/OneDrive/Desktop/git_repos/project_euler/cpp/08/"
exe = ["pe8.exe", "pe8_brute_force.exe", "pe8_optimized.exe"]

times = []
for file in exe:
    timing = []
    for i in range(100):
        start = time_ns()
        system(path + file)
        timing.append(time_ns() - start)
    times.append(timing)
    times_arr = np.array(times).T

outputs = ["Derek Algorithm", "Brute Algorithm", "Optimized Algorithm"]

for idx, name in enumerate(outputs):
    print(f'Derek Algorithm = {times_arr[:, idx].mean()} {times_arr[:, idx].var()}')

# start = time_ns()
# system(path + "pe8_brute_force.exe")
# stop = time_ns()
# print(stop - start)