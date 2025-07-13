class Person:
    def __init__(self, name):
        self.name = name

    def speak(self):
        print(f"Hello, my name is {self.name}")

class Student(Person):
    def speak(self):  # method override
        print(f"Hi, I'm student {self.name}")

p = Person("Areeba")
s = Student("Khushi")
p.speak()
s.speak()
