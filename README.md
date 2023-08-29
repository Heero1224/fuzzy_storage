Storage Facility Inventory Management

Requirements
	- Generate full bill for each customer
	- Track Units in multpiple ways
		+ Cost
		+ Type
		+ Size
		+ Renter
		+ Facility
		+ Unit ID
	- Track Standard Unit Type Cost
	- Track Available vs Rented
	- Projected Revenue for
		+ Entire Facility
		+ Range of Units
Behavior
	1) If config file does not exist, create config file
		+ Creating COnfig File
			i) Get Company Name, Phone Number, Address, and Tax Rate
			ii) Create Default Customer Data
				ii a) Name: Last, First, MI
				ii b) Address
				ii c) Phone Number
				ii d) Renter ID Number (16 bits = 65,536 possible numbers)
				ii e) email
				ii f) Any other details to collect?
			iii) Get Number of Types of Units
			iv) Create Default Data for each type of Unit
				a) Title
				b) Description
				c) Cost
				d) Renter=NULL
				e) Date of Occupation
				f) Experation of Contract
				g) etc
			
	2) Read config file
	3) Follow config file rules
	4) ask for query
		+ Query Types
			1) generate bills
				+ Options
				a) all
					+ Generate all customer bills for the month
				b) customer name or id, comma seperated list
					+ Generate that customer's bill for the current month
				c) send
					Send whichever bills were generated to the appropriate recipients via email
			2) availability
				a) blank
					+ list all currently available units in alpha numeric order
				b) type	
					+ list all current available units by type such as
						2x2x8	9
						TRAILER 4
						etc.
				d) occupied
					+ list all occupied units in alpha numeric order
			3) update
				+ Update config file data
				a) prices
				b) tax rate
				c) company info
				d) add unit
				e) add unit type
	5) Upon error, attempt to rectify
		+ if rectify fails, send email to manager
