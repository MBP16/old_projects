#csv 파일에서 한글 부분은 지우고 실행해주세요
import csv
import matplotlib.pyplot as plt

plt.rc('font', family = 'AppleGothic', size=8)
plt.rcParams['axes.unicode_minus'] = False


conzone_data = csv.reader(open('conzone_data.csv'))
data_2012 = csv.reader(open('201206.csv'))
data_2022 = csv.reader(open('202206.csv'))


conzones = [[], ["서울TG-신갈JC", "신갈JC-수원신갈IC", "수원신갈IC-기흥IC", "기흥IC-기흥동탄IC", "기흥동탄IC-동탄JC", "동탄JC-오산IC", "오산IC-남사진위IC", "남사진위IC-안성JC", "안성JC-안성IC", "안성IC-북천안IC", "북천안IC-천안IC", "천안IC-천안JC", "천안JC-남풍세IC", "남풍세IC-정안IC"]]
for a in conzone_data:
    conzones[0].append(a[0])



values_2012 = {}
values_2022 = {}

for b in data_2012:
    if b[0] == "20120603":
        if b[1] in conzones[0]:
            if b[1] in values_2012.keys():
                values_2012[b[1]] += int(b[3])
            else:
                values_2012[b[1]] = int(b[3])
values_2012[conzones[0][12]] = 0
values_2012[conzones[0][13]] = 0
values_2012[conzones[0][14]] = 0
for c in data_2022:
    if c[0] == "20220603":
        if c[1] in conzones[0]:
            if c[1] in values_2022.keys():
                values_2022[c[1]] += int(c[3])
            else:
                values_2022[c[1]] = int(c[3])


plt.title('2012와 2022의 서울-세종사이 구간별 교통량 추이 비교 그래프')
plt.plot(conzones[1], values_2012.values(), label='2012')
plt.plot(conzones[1], values_2022.values(), label='2022')
plt.legend()    
plt.show()