expenses = {'Rent': 15000, 'Food': 5000, 'Transport': 2000}
total = sum(expenses.values())

print("Monthly Budget Breakdown:")
for item, cost in expenses.items():
    print(f"{item}: Rs {cost}")
print("Total Expense: Rs", total)
