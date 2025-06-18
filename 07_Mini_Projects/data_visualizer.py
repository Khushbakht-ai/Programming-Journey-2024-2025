import matplotlib.pyplot as plt

labels = ['Apples', 'Bananas', 'Cherries', 'Dates']
quantities = [30, 15, 20, 10]

plt.pie(quantities, labels=labels, autopct='%1.1f%%', startangle=90)
plt.title('Fruit Distribution')
plt.show()
