import pandas as pd

data = {
    'Student': ['Ali', 'Sara', 'Ali', 'Sara'],
    'Subject': ['Math', 'Math', 'English', 'English'],
    'Marks': [85, 90, 80, 92]
}
df = pd.DataFrame(data)

grouped = df.groupby('Student')['Marks'].mean()
print("Average Marks:\n", grouped)
