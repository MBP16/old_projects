import csv
import matplotlib.pyplot as plt


plt.rc('font', family = 'AppleGothic')
plt.rcParams['axes.unicode_minus'] = False


data2019 = csv.reader(open('20190911.csv'))
data2020 = csv.reader(open('20200929.csv'))

x1 = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
x2 = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for row in data2019: 
    if row[2] == '101':
        x1[int(row[1])] += int(row[13])

for row in data2020: 
    print(row)
    if row[2] == '101 ':
        x2[int(row[1])] += int(row[13])


plt.title('추석 서울 톨게이트의 시간대별 교통량 수')
plt.plot(range(0, 24), x1, label='2019')
plt.plot(range(0, 24), x2, label='2020')
plt.legend()    
plt.show()
