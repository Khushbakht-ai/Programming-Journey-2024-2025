def multiply_all(*args):
    total = 1
    for num in args:
        total *= num
    print("Product:", total)

multiply_all(2, 3, 4)

def print_profile(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")

print_profile(name="Khushi", age=19, field="AI")
