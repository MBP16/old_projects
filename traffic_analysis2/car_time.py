#csv 파일에서 한글 부분은 지우고 실행해주세요
import csv
import matplotlib.pyplot as plt


plt.rc('font', family = 'AppleGothic')
plt.rcParams['axes.unicode_minus'] = False


data2012 = csv.reader(open('20120603.csv'))
data2022 = csv.reader(open('20220603.csv'))

x1 = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
x2 = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for row in data2012: 
    if row[2] == '603':
        x1[int(row[1])] += int(row[13])

for row in data2022: 
    if row[2] == '603':
        x2[int(row[1])] += int(row[13])


plt.title('2012년와 2022년에 세종시에서 가는 길목인 정안 톨게이트의 시간대별 교통량 수')
plt.plot(range(0, 24), x1, label='2012')
plt.plot(range(0, 24), x2, label='2022')
plt.legend()    
plt.show()