weight = float(input("Enter weight (kg): "))
height = float(input("Enter height (m): "))

try:
    bmi = weight / (height ** 2)
    print("Your BMI is:", round(bmi, 2))
except ZeroDivisionError:
    print("Height cannot be zero.")
except ValueError:
    print("Please enter valid numbers.")
