import matplotlib.pyplot as plt

subjects = ['Math', 'Science', 'English', 'History']
marks = [85, 90, 78, 88]

plt.bar(subjects, marks, color='skyblue')
plt.title('Student Marks')
plt.xlabel('Subjects')
plt.ylabel('Marks')
plt.show()
