from datetime import datetime as dt
import datetime
import random
import json
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import copy

#Can add speed and live reading fairly easily

##########

begin = 0
end = None

##########

plt.style.use("fivethirtyeight")
fig = plt.figure()
ax1 = fig.add_subplot(1,1,1)
ax1.set_xlim(begin)

data = []
file_name = input("Enter Json file, type \"test\" for test data, or \"testjson\" to make a json file to read from ")

if (file_name == "test" or file_name == "testjson"):
    for inc in range(100):
        data.append([(dt.utcnow() + datetime.timedelta(seconds = inc)), random.randint(1,100)])

if (file_name == "testjson"):
    data2 = copy.deepcopy(data)
    with open("testJSON.json", 'w') as file1:
        file1.truncate(0)
        x = 0
        while x <= len(data)-1:
            data2[x][0] = data2[x][0].strftime('%Y-%m-%dT%H:%M:%S.%f')
            x+=1

        json.dump(data2, file1, indent = True)
    file_name = "testJSON.json"

if file_name != "test":
    with open(file_name, "r") as file2:
        data = json.load(file2)
        inc = 0
        while inc <= len(data) - 1:
            data[inc][0] = dt.strptime(data[inc][0], '%Y-%m-%dT%H:%M:%S.%f')
            inc += 1


data_start = data[0][0]
start = dt.utcnow()

secondOffset = data[0][0].strftime("%S")

def animate(i):
    plot_x = []
    plot_y = []
    for data_point in data:
        if (data_point[0] - data_start >= datetime.timedelta(seconds = begin)):
            if end == None or data_point[0] - data_start <= datetime.timedelta(seconds = end):
                if data_point[0] - data_start <= dt.utcnow() - start + datetime.timedelta(seconds = begin):
                    seconds = int((data_point[0] - data_start).total_seconds())
                    print(seconds)
                    plot_x.append(seconds)
                    plot_y.append(data_point[1])
    ax1.clear()
    ax1.plot(plot_x, plot_y)



ani = animation.FuncAnimation(fig, animate, interval= 100)

plt.show()