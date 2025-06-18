with open("sample.txt", "w") as f:
    f.write("Hello file!\nThis is Python file handling.")

with open("sample.txt", "r") as f:
    content = f.read()
    print("File Content:\n", content)
