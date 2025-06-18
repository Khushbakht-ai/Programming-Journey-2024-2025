import matplotlib.pyplot as plt

days = ['Mon', 'Tue', 'Wed', 'Thu', 'Fri']
temperature = [30, 32, 33, 31, 29]

plt.plot(days, temperature, marker='o', color='green')
plt.title('Temperature Over Days')
plt.xlabel('Days')
plt.ylabel('Temperature (°C)')
plt.grid(True)
plt.show()
