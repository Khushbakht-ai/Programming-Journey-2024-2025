import json

student = {
    "name": "Khushi",
    "age": 19,
    "skills": ["Python", "C++", "AI"]
}

with open("student.json", "w") as file:
    json.dump(student, file, indent=4)

with open("student.json", "r") as file:
    data = json.load(file)

print("Name:", data["name"])
print("Skills:", data["skills"])
