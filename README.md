Bangla Khabar Restaurant Ordering System

This project implements a basic ordering system for the Bangla Khabar Restaurant, allowing customers to browse a menu, select items, and calculate their total bill.

Features:

    Menu with item codes, descriptions, sizes (where applicable), and prices
    Ability to add multiple items to an order, specifying quantities
    Calculation of total order cost based on item prices and quantities
    Customer name capture

Getting Started

    Prerequisites:
        C compiler (e.g., GCC)
    Compilation:
        Save the code as bangla_khabar_order.c
        Compile using GCC:
        Bash

        gcc bangla_khabar_order.c -o bangla_khabar_order


Execution:

    Run the compiled executable:
    Bash

    ./bangla_khabar_order

Usage:

The program welcomes the customer and presents a menu. The customer can choose to:

    Order: Enter their name, browse the menu, select items by code, specify quantities, and add them to their order.
    Exit: Thank the customer and exit the program.

Limitations:

    Text-based interface (no graphical user interface)
    Limited validation (e.g., no checking for invalid item codes or negative quantities)
    No order storage or persistence

Future Improvements:

    Implement a graphical user interface (GUI) for a more user-friendly experience.
    Add input validation to prevent errors and enhance robustness.
    Store orders in a database or file for record-keeping and potential future features.
    Implement additional features like order confirmation, payment processing, and order tracking.

Code Structure:

The code is organized into three main functions:

    main(): Handles the overall program flow, including welcome message, menu display, order processing, and exit message.
    order(): Deals with customer name input, item selection and quantity specification, order cost calculation, and order confirmation.
    items(): Prints the restaurant's menu with item codes, descriptions, sizes (where applicable), and prices.

Libraries:

    stdio.h: Provides standard input/output functions (e.g., printf, scanf) for user interaction.
    string.h: Offers string manipulation functions (e.g., gets - caution, consider using fgets instead for safer input).
    conio.h (non-standard header): Used for getch() function, which might not be portable across different compilers. Consider alternative keyboard input methods if portability is a concern.

Additional Notes:

    The use of gets() for string input is considered unsafe due to potential buffer overflows. If you need to read a line of input, consider using fgets() instead, which allows you to specify the maximum number of characters to read.
    The conio.h header is not a standard header and might not be available on all compilers. If portability is a concern, explore alternative approaches for capturing single keystrokes.
