# 📞 Phone Dictionary

A simple **command-line phone dictionary** implemented in **C** using **linked lists**. This program allows users to add, search, delete, and list contacts by name and phone number. It's a beginner-friendly data structures project to understand dynamic memory, structs, and linked lists in C.

---

## 🧠 Features

- Add a new contact (name and phone number)
- Search for a contact by name
- List all saved contacts
- Delete a contact by name
- Exit and free up allocated memory

---

## 🛠️ Technologies Used

- **Language:** C
- **Data Structure:** Singly Linked List
- **Compiler:** GCC or any standard C compiler

---

## 🖥️ Program Overview

### 📂 Files

- `phone_dictionary.c` — Main source code file
- `README.md` — Project documentation (this file)

---

## ▶️ How to Compile and Run

### 🔧 Step 1: Compile

Using GCC (Linux/macOS/WSL/MinGW):

```bash
gcc phone_dictionary.c -o phone_dictionary
```

### ▶️ Step 2: Run

```bash
./phone_dictionary
```

If you're on Windows (Command Prompt or PowerShell):

```bash
phone_dictionary.exe
```

---

## 📋 Menu Interface

```text
Phone Dictionary Menu:
1. Add Contact
2. Search Contact
3. List All Contacts
4. Delete Contact
5. Exit
Enter your choice: 
```

---

## 📌 Sample Output

```text
Phone Dictionary Menu:
1. Add Contact
2. Search Contact
3. List All Contacts
4. Delete Contact
5. Exit
Enter your choice: 1
Enter contact name: Alice
Enter phone number: 9876543210
Contact added successfully!

Phone Dictionary Menu:
Enter your choice: 3

Phone Book Contacts:
1. Alice - 9876543210
```

---

## 🧼 Memory Management

- All memory allocated for contacts is released before the program exits.
- Prevents memory leaks using a `freeMemory()` function.

---

## 🚀 Future Enhancements (Suggestions)

- Store contacts in a file to preserve data between runs
- Sort contacts alphabetically
- Improve search to allow partial name matches
- Add input validation for phone numbers

---

## 🙋 Author

Created by **[Your Name]**

> If you'd like to contribute or suggest changes, feel free to fork this repo and open a pull request!

---

## 📄 License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).
