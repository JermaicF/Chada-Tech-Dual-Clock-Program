# Chada-Tech-Dual-Clock-Program
This C++ program was developed as part of a course project to meet the functional requirements provided by Chada Tech. The goal was to create a simple, interactive console application that displays the current time in both 12-hour and 24-hour formats.

Chada Tech needed a tool to display both 12-hour and 24-hour clocks side-by-side to meet international and domestic client needs. The problem addressed by this program was creating synchronized, user-controllable clocks in both formats that reflect real-time updates and support intuitive user interaction.

I implemented a clean, modular class-based structure to encapsulate time manipulation, making the program easy to understand and extend. The use of formatted output ensures clarity in how time is displayed to users. Additionally, input validation ensures that initial time setup is user-friendly.

One enhancement could be separating the UI and logic layers for better scalability and testing. Right now, the code handles both user input and clock logic in the same place.

The most challenging aspects I found was handling the correct rollover behavior for seconds and minutes to be tricky, I resolved this by methodically using modular arithmetic and ensuring each overflow incremented the next time unit. Debugging this logic helped sharpen my understanding of control flow and state management in time-based programs.

This project helped me improve my understanding of C++ object-oriented programming, modular design and encapsulation, and Input validation, a few skills that are sure to be useful for future projects.

To make the program maintainable and adaptable, I used a dedicated Clock class to encapsulate clock data and behavior. Functions are clearly named and modular. The code uses consistent formatting and inline comments.
