# Student Record Management System 

**Student Record Management System** developed in **C** using a **Singly Linked List**. This project allows users to efficiently manage student records with features like adding, deleting, modifying, sorting, displaying, and saving records to a file.

## Features

### Add Record
- The **smallest available roll number** is automatically assigned.
- Accepts student name and percentage.
- New node is dynamically created.
- Inserts the record into the linked list.

### Delete Record
Delete student records using:
- Roll Number
- Student Name

When searching by **Student Name**, all matching records are displayed. The user is then prompted to enter the corresponding **Roll Number** to confirm the deletion.

### Show Record
- Displays all student records in a formatted table.

### Modify Record
Search records using:
- Roll Number
- Student Name

Modify:
- Student Name
- Percentage

### Save Record
- Saves all records to `student.dat`.
- Ensures data is preserved after the program is closed.
  
 ### Load Record
- Automatically loads records from `student.dat` when the program starts.
- Reconstructs the **Singly Linked List** dynamically by creating nodes for each stored record.
- Ensures previously saved records are available.
  
### Sort Record
Sort records by:
- Student Name
- Percentage

### Exit Option
- Save and Exit
- Exit Without Saving

---
