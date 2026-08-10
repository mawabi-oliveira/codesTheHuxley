question = input("What is the answer to the Great Question of Life, the Universe, and Everything? ")
answer = question.strip().lower()
if answer in ["42", "forty-two", "forty two"]:
    print("Yes")
else:
    print("No")


