This file explains the process to test the code.

There is no additional text file with the code file as the code automatically creates two text files: "Trains.txt" and "Tickets.txt" that contain data of
trains and tickets respectively.
No other extra instructions are required as the code automatically displays messages asking input from the user.

The reservation window has 4 options:

1) Enquiry (It opens the train data file on screen and asks for source city and destination city and displays number of seats left in the train.
 If any of the source or destination city is wrongly inputted, it displays an invalid message)

2) Booking (It displays details of all trains on the screen and then asks for name and train number, it automatically then displays the ticket information
  of name, train nu, pnr number, seat booked and charges.
  As stated in the question, the program only books one seat at a time. It then asks for user confirmation and confirms ticket. The tickets data is stored
  automatically in the file tickets.txt

3) Cancellation (It asks for train number and pnr number to be cancelled and deletes that entry from the data file. It then displays refunded amount 
  .50% of fare)

4) Exit (By selecting this you can exit the system)

Note: - We have tested this code in os Linux and GCC compiler, it is working perfect. It is also working fine in Windows but might show ambiguity due 
        to difference in OS.  But as per Linux, it is working well.
        All other information about the code and functions inside is mentioned in short comments in the code itself.

This project is developed by: -

1) BHAVYA SHANDILYA - 2019B5PS0753P
 He made the main function, main window, "train.txt" file, enquiry function, reservation function, charges function and comments.


2) VIRESH KUMAR - 2019B5PS0772P
   He made the cancel function and train function.
