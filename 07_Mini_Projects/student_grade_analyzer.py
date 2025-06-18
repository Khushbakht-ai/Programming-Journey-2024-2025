students = {'Ali': 82, 'Sara': 91, 'Zain': 76, 'Noor': 89}

for name, marks in students.items():
    grade = 'A' if marks >= 90 else 'B' if marks >= 80 else 'C'
    print(f"{name}: {marks} → Grade: {grade}")
