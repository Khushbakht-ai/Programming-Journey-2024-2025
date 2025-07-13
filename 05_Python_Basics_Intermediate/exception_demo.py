def divide(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        return "Cannot divide by zero"
    else:
        return result
    finally:
        print("Function executed")

print(divide(10, 2))
print(divide(10, 0))
