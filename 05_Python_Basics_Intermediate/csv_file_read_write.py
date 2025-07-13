import csv

rows = [
    ["Name", "Age", "Field"],
    ["Khushi", 19, "AI"],
    ["Areeba", 20, "Design"]
]

with open("students.csv", "w", newline="") as file:
    writer = csv.writer(file)
    writer.writerows(rows)

with open("students.csv", "r") as file:
    reader = csv.reader(file)
    for row in reader:
        print(row)
