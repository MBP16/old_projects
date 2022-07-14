from cProfile import label
import csv
from this import d
import matplotlib.pyplot as plt


plt.rc('font', family = 'AppleGothic')
plt.rcParams['axes.unicode_minus'] = False


data2019 = csv.reader(open('20190911.csv'))
data2020 = csv.reader(open('20200929.csv'))

x1 = [0, 0, 0, 0, 0, 0, 0]
x2 = [0, 0, 0, 0 ,0 ,0 ,0]

for row in data2019: 
    print(row)
    if row[2] == '101':
        for i in range(7, 14) : 
            x1[i-7] += int(row[i])

for row in data2020: 
    if row[2] == '101 ':
        for i in range(7, 14) : 
            x2[i-7] += int(row[i])

import matplotlib.pyplot as plt
plt.title('추석 서울 톨게이트의 차종별 교통량 수')
plt.plot(["1종", "2종", "3종", "4종", "5종", "6종", "전체"], x1, label='2019')
plt.plot(["1종", "2종", "3종", "4종", "5종", "6종", "전체"], x2, label='2020')
plt.legend()
plt.show()