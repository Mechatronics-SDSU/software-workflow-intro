#python
from datetime import datetime as dt
import datetime
import random
import json
import copy

#external libs
import matplotlib.pyplot as plt
import matplotlib.animation as animation

def animate(i: int) -> None:
    """Function called repeatedly to graph data at real time speed

    :param i: frames passed
    :return: None
    """
    # Lists to be plotted
    plot_x = []
    plot_y = []
    # Iterating over data
    for data_point in data:
        # Check if point is before beginning of whats set to be shown
        if data_point[0] - data_start >= datetime.timedelta(seconds=begin):
            # Check if point is after end of whats set to be shown
            if end is None or data_point[0] - data_start <= datetime.timedelta(seconds=end):
                # Acts as if your beginning seconds ahead of the start to mimic starting the graph later
                if data_point[0] - data_start <= dt.utcnow() - graphing_start + datetime.timedelta(seconds=begin):
                    seconds = int((data_point[0] - data_start).total_seconds())
                    plot_x.append(seconds)
                    plot_y.append(data_point[1])

    ax1.clear()
    ax1.plot(plot_x, plot_y)


def main():
    """Driver code for the graphing utility

    :return: None
    """
    global begin
    global end
    global data_start
    global data
    global ax1
    global graphing_start
    ##########

    begin = 0
    end = 20

    ##########

    plt.style.use("fivethirtyeight")
    fig = plt.figure()
    ax1 = fig.add_subplot(1, 1, 1)
    ax1.set_xlim(begin)


    data = []

    file_name = input("Enter Json file, type \"test\" for test data, or \"testjson\" to make a json file to read from ")

    if file_name == "test" or file_name == "testjson":
        for inc in range(100):
            data.append([(dt.utcnow() + datetime.timedelta(seconds=inc)), random.randint(1, 100)])

    # Write data to json file
    if file_name == "testjson":
        write_data = copy.deepcopy(data)
        with open("testJSON.json", 'w') as file:
            file.truncate(0)
            inc = 0
            while inc <= len(data) - 1:
                write_data[inc][0] = write_data[inc][0].strftime('%Y-%m-%dT%H:%M:%S.%f')
                inc += 1

            json.dump(write_data, file, indent=True)
        file_name = "testJSON.json"

    # Open Json file and read in utc as string
    if file_name != "test":
        with open(file_name, "r") as file:
            data = json.load(file)
            inc = 0
            while inc <= len(data) - 1:
                data[inc][0] = dt.strptime(data[inc][0], '%Y-%m-%dT%H:%M:%S.%f')
                inc += 1

    data_start = data[0][0]
    graphing_start = dt.utcnow()

    ani = animation.FuncAnimation(fig, animate, interval=100)

    plt.show()



if __name__ == "__main__":
    main()
