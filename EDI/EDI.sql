
USE EDI;

DROP TABLE IF EXISTS Company;            -- For right now Company is the Child of Employee
DROP TABLE IF EXISTS Shift;           -- Schedule is the child of Employee
DROP TABLE IF EXISTS Employee;           -- This is the Parent Entity
DROP TABLE IF EXISTS Team;				-- Employee a foreign key from Team, so team must be dropped first?

CREATE TABLE Team (
	TeamID VARCHAR(5) PRIMARY KEY,
	TeamName VARCHAR(30) NOT NULL,
    ProjectsAssigned numeric(3),
    ProjectsCompleted numeric(3)
);

CREATE TABLE Employee (
	EmployeeID VARCHAR(9) NOT NULL UNIQUE,
    Name_Last VARCHAR(30) NOT NULL,
    Name_First VARCHAR(30) NOT NULL,
    Salary NUMERIC(12, 2) NOT NULL DEFAULT 0,
    SSN VARCHAR(9) NOT NULL UNIQUE,                     -- This does not contain hyphens
    Position_Code CHAR(1) NOT NULL,    					-- I have our E,S,M,C and G for superuser (only EDI has it, it stands for God)
    TasksAssigned numeric(3) DEFAULT 0,
    TasksComplete numeric(3) DEFAULT 0,
    Username VARCHAR(20) NOT NULL DEFAULT 'username',   -- There are no constraints on what the user can enter yet
    Password VARCHAR(20) NOT NULL DEFAULT 'password',   -- Same as above
    Team VARCHAR(5),	-- Employee can only belong to one team?
	UNIQUE(Username, Password),							-- The combination of the username/password entered must be unique
    PRIMARY KEY (EmployeeID),
    FOREIGN KEY (Team) REFERENCES Team(TeamID)
		ON UPDATE CASCADE
        ON DELETE CASCADE
);

CREATE TABLE Shift (
    Employee VARCHAR(9) NOT NULL,    			-- Employee ID
    ShiftDate VARCHAR(8) NOT NULL,              -- Date is a follow YYYYmmDD
    StartHour NUMERIC(2) NOT NULL,               -- Start Hour
    StartMin NUMERIC(2) NOT NULL,                -- Start Minute
    EndHour NUMERIC(2) NOT NULL,              	 -- End Hour
    EndMin NUMERIC(2) NOT NULL,               	 -- End Minute
    PRIMARY KEY (Employee, ShiftDate),
    FOREIGN KEY (Employee) REFERENCES Employee(EmployeeID)
		ON UPDATE CASCADE
        ON DELETE CASCADE
);

CREATE TABLE Company (
	CompanyName VARCHAR(30) NOT NULL,
    CEO VARCHAR(9) NOT NULL,             -- This is just the Employee ID of the CEO
    
    PRIMARY KEY (CompanyName),
    FOREIGN KEY (CEO)
		REFERENCES Employee(EmployeeID)
        ON UPDATE CASCADE
        ON DELETE CASCADE
);




INSERT INTO Employee (EmployeeID, Name_Last, Name_First, Salary, SSN, Position_Code, Username, Password)
--   THE KEY FOR EMPLOYEES  (EID,   Last,        First,      Salary,         SSN,    PosCode,  Username,         Password      )

					 VALUES ('666', 'TheMan',    'Marcos',  10000000.00,   '666666666', 'C', 'MarcosTheMan',   'IOwnThisCompany'),
							('777', 'PoorGuy',   'Alberto', 777.77,        '555555555', 'E', 'Alberto707', 'IAmHomeless'    ),
                            ('341', 'Amazing',   'Eddy',    9999999999.99, '341341341', 'G', 'EdiSeesAll',     'IWinAtBusiness' ),
                            ('92',  'Trombetta', 'Katie',   123456789.00,  '123456789', 'M', 'Katie',          'Katie'          ),
                            ('90',  'Way',       'Thomas',  123456789.00,  '987654321', 'E', 'Thomas',         'Thomas'         ),
                            ('00',  'Henderson', 'Joseph',  123456789.00,  '654987321', 'M', 'Joseph',         'Joseph'         ), 
                            ('007', 'Hatton',    'Evan',    123456789.00,  '654321987', 'S', 'Evan',           'Evan'           ),
                            ('123', 'Singh',     'Gary',    123456789.00,  '456123789', 'S', 'Gary',           'Gary'           );
                            
                            
                            
                            
                            
-- THE KEY FOR SCHEDULE       (EID,     Date,      SHour,  SMin,   EHour,  EMin)                  
                            
INSERT INTO Shift VALUES      ('666',   20201102,     9,	00,		17,		59), -- Marcos
                              ('666',   20201104,     9,	00,		17,     59),
                              ('666',   20201105,     9,  	00,		17,     59),
                              ('666',   20201109,     9,  	00,		17,     59),
                              ('666',   20201111,     9,  	00,		17,     59),
                              ('666',   20201112,     9,  	00,		17,     59),
                              
                              ('777',   20201102,     9,  	00,		17,   	59), -- Alberto
                              ('777',   20201103,     9,  	00,    	17,   	59),
                              ('777',   20201104,     9,  	00,    	17,   	59),
                              ('777',   20201105,     9,  	00,    	17,   	59),
                              ('777',   20201106,     9,  	00,    	17,   	59),
                              ('777',   20201109,     9,  	00,    	17,   	59),
                              ('777',   20201110,     9,  	00,   	17,   	59),
                              ('777',   20201111,     9,  	00,     17,   	59),
                              ('777',   20201112,     9,  	00,   	17,  	59),
                              ('777',   20201113,     9,  	00,   	17,  	59),
                              
                              ('90',   20201102,     9,  		00,     17,   	59), -- Thomas
                              ('90',   20201103,     9,  		00,     17,   	59),
                              ('90',   20201104,     9,  		00,     17,   	59),
                              ('90',   20201105,     9,  		00,     17,   	59),
                              ('90',   20201106,     9,  		00,     17,   	59),
                              ('90',   20201109,     9,  		00,     17,   	59),
                              ('90',   20201110,     9,  		00,     17,   	59),
                              ('90',   20201111,     9,  		00,     17,   	59),
                              ('90',   20201112,     9,  		00,     17,   	59),
                              ('90',   20201113,     9,  		00,     17,   	59),
                              
                              ('92',   20201102,     9,  		00,     17,   	59), -- Katie
                              ('92',   20201103,     9,  		00,     17,   	59),
                              ('92',   20201104,     9,  		00,     17,   	59),
                              ('92',   20201105,     9,  		00,     17,   	59),
                              ('92',   20201106,     9,  		00,     17,   	59),
                              ('92',   20201109,     9,  		00,     17,   	59),
                              ('92',   20201110,     9,  		00,     17,   	59),
                              ('92',   20201111,     9,  		00,     17,   	59),
                              ('92',   20201112,     9,  		00,     17,   	59),
                              ('92',   20201113,     9,  		00,     17,   	59),
                              
                              ('00',   20201102,     9,  		00,     17,   	59), -- Joseph
                              ('00',   20201103,     9,  		00,     17,   	59),
                              ('00',   20201104,     9,  		00,     17,   	59),
                              ('00',   20201105,     9, 		 00,    17,   	59),
                              ('00',   20201106,     9,  		00,     17,   	59),
                              ('00',   20201109,     9,  		00,     17,   	59),
                              ('00',   20201110,     9,  		00,     17,   	59),
                              ('00',   20201111,     9,  		00,     17,   	59),
                              ('00',   20201112,     9,  		00,     17,   	59),
                              ('00',   20201113,     9,  		00,     17,   	59),
                              
                              ('007',   20201102,     9,  	00,     17,   	59), -- Evan
                              ('007',   20201103,     9,  	00,     17,   	59),
                              ('007',   20201104,     9,  	00,     17,   	59),
                              ('007',   20201105,     9,  	00,     17,   	59),
                              ('007',   20201106,     9,  	00,     17,   	59),
                              ('007',   20201109,     9,  	00,     17,   	59),
                              ('007',   20201110,     9,  	00,     17,   	59),
                              ('007',   20201111,     9,  	00,     17,   	59),
                              ('007',   20201112,     9,  	00,     17,   	59),
                              ('007',   20201113,     9,  	00,     17,   	59),
                              
                              ('123',   20201102,     9,  	00,     17,   	59), -- Gary
                              ('123',   20201103,     9,  	00,     17,   	59),
                              ('123',   20201104,     9,  	00,     17,   	59),
                              ('123',   20201105,     9,  	00,     17,   	59),
                              ('123',   20201106,     9,  	00,     17,   	59),
                              ('123',   20201109,     9,  	00,     17,   	59),
                              ('123',   20201110,     9,  	00,     17,   	59),
                              ('123',   20201111,     9,  	00,     17,   	59),
                              ('123',   20201112,     9,  	00,     17,   	59),
                              ('123',   20201113,     9,  	00,     17,   	59);

                                
-- THE KEY FOR COMPANY      (Company,  CEO)

INSERT INTO Company VALUES  ( 'EDI',  '341'); 




    