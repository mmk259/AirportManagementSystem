# AirportManagementSystem
![image](https://user-images.githubusercontent.com/108261815/236044211-53689edf-627e-4dcb-b215-495c88183ce9.png)
1: Background Description:
Current Self-service technology displays information of flight and seat management, and prints boarding pass of those passengers who are travelling with only hand carries.


2: Scope:
The project provides ease to the passengers who are travelling with luggage by letting the passengers generate their luggage tag along with the boarding pass without having to wait in long queues at the counters leaving them with the task of dropping off luggage at the conveyer belts. 

3: Facilitates:
The Self-service technology facilitates both the airport management and passengers by:
a)	Reduced waiting times in queues for passengers hence making the check-in desks less chaotic, and making passengers ready to go through security in a shorter timeframe.
b)	Providing passengers with control as well as the convenience of checking in their own luggage, resulting in increased passengers’ overall satisfaction with their travel experience.
c)	Kiosks need less space in the terminal compared to more check-in desks, which is useful if the space is limited with passenger numbers growing.
d)	Fewer check-in staff are required to serve passengers, resulting in resources being used in other areas of need; enhancing customer service
e)	Contact-free interactions reassures passengers their safety especially in the time of Covid-19 pandemic; by limiting personal interactions with staff, while creating a safer environment for passengers and airport staff.



4: Features & Implementation:

Overview:
Dummy data of 50 passengers is created by using arrays in structures which includes:
•	ID (1-50).
•	Flights Destination (Peshawar, Islamabad, Lahore, Quetta and Swat).
•	Time (18:00, 7:45, 12:00, 15:30, 2:50).
•	Plane Number (pk307, pk596, pk309, pk498, pk107).
•	Seats (categories: a1-a13, b1-b13, c1-c13 and d1-d13).
•	Gate Number (1 to 5).

Functions:

1: Recognition with passports or ID:

•	Taking an ID as input.
•	Comparing it with the ids store in the structure using for loop.
•	If Id is found in the structure the program will proceed.
Else the program will end.

	Using Id as a reference to manage and extract the data in the structure. 

2. Seat management:

	The data of available seats are initialize using arrays.
•	Displaying the current occupied seat.
•	Asking the passenger that he/she wants to change the seat or not by using switch.
•	Displaying the available seats for the specific flights by comparing the respective data stored in the structure.
•	Taking new seat as an input, and verifying whether the input is present in the available seat array.
•	In the by swapping the data the changes are stored.
 
3. Flight information:

•	Displaying the respective data stored in the structure.

4. Verify and Generate tag of the Luggage:

•	Asking the passenger that he/she is travelling with the hand carry or the luggage by using switch case.
•	If the passenger has hand carry it will proceed.
•	Else the weight of the luggage is taken as input.
a)	If the weight is <= 30 the tag will be generated.
b)	If the weight exceeds the limit the passenger has given two options.
 	    > Reduction of the weight.
 	    > Payment for the excess weight.

5. Generate the boarding pass.
		
•	Displaying the information stored in the structure for the boarding pass.

5: Manual:
I.	After displaying the title page the program ask your id, and you should enter your Id in between (1-50). Otherwise it shows the id is not found.

II.	After verifying the id the program displays the menu which has 3 options.
a)	Seat Management.
It displays your original seat and allows you to change your seat if you want to.

b)	Flight Information.
It displays: 
	Plane Number.
	Time.
	Gate Number.
	Destination.

c)	Proceed.
The program asks for the type of baggage you are carrying.
	If you have hand carry it will proceed towards generating boarding pass.
	If you have luggage it will ask for the weight of your luggage which has the limit of 30kg.
a)	If the weight is under limit it will directly generate the luggage tag and proceed towards generating the boarding pass.
b)	It the weight is over the limit it gives you two options.
 	Reduce the weight and try again.
 	Pay the displayed amount at the respective counter and the program ends.


Luggage Tag Information:
It displays:
	Plane Number.
	Time.
	Destination.
	Weight of the Luggage.
Boarding pass:
It displays:
	Passenger Name.
	Plane Number.
	Time.
	Destination.
	Seat Number.
	Gate Number.
* "Note: The menu options are sequential so if you have choose any option you cannot go back to the selection of previous option." *
