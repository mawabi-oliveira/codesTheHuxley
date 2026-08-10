def convert(text):
    text = text.replace(":)", "🙂")
    text = text.replace(":(", "🙁")
    return text

def main():
    user_input = input("Type your text: ")
    result = convert(user_input)
    print("Converted text:", result)

if __name__ == "__main__":
    main()