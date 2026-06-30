-- Create a table called Restaurant with columns: id, name, location, and cuisine. Apply NOT NULL constraint to name and location, and make id the PRIMARY KEY.

CREATE TABLE restaurant(
    id int PRIMARY KEY,
    name varchar(100) NOT NULL,
    location VARCHAR(100) NOT NULL,
    cuisine VARCHAR(50)
);




-- Create a table called FoodOrder with columns: order_id, restaurant_id, user_id, and order_total. Set order_id as PRIMARY KEY, and add a FOREIGN KEY constraint on restaurant_id referencing Restaurant(id).

CREATE TABLE foodorder(
	order_id int PRIMARY KEY,
    user_id int,
    order_total decimal(10,2),
    restaurant_id int,
    FOREIGN KEY (restaurant_id) REFERENCES restaurant(id)
);




-- Insert 6 rows into a table called SpotifyUser with columns: user_id, username, email, and subscription_type. Ensure that username is UNIQUE and email is NOT NULL.Hint: Use the UNIQUE and NOT NULL constraints when creating the table.


CREATE table spotifyuser(
	user_id int PRIMARY KEY, 
    username varchar(50) UNIQUE KEY, 
    email varchar(100) NOT NULL, 
    subscription_type varchar(20) 	
); 

INSERT into spotifyuser(user_id,username,email,subscription_type)
VALUES(1,'Prins','prins@gmail.com','Premium'),
      (2,'Mahiman','mahiman@gmail.com','Free'),
      (3,'Ayan','ayan@gmail.com','Premium'),
      (4,'Jiyan','jiyan@gmail.com','Student'),
      (5,'Yuvraj','yuvraj@gmail.com','Premium'),
      (6,'Rishabh','rishabh@gmail.com','Free');





-- Create a VIEW named TopSpendersView that shows usernames and order_total from a FoodOrder table where order_total is greater than 1000.


CREATE TABLE FoodOrder (
    order_id INT PRIMARY KEY,
    restaurant_id INT,
    user_id INT,
    order_total DECIMAL(10,2),

    FOREIGN KEY (restaurant_id)
        REFERENCES Restaurant(id),

    FOREIGN KEY (user_id)
        REFERENCES Users(user_id)
);

INSERT INTO FoodOrder (order_id, restaurant_id, user_id, order_total)
VALUES
(101, 1, 1, 1200.50),
(102, 2, 2, 850.00),
(103, 1, 3, 1500.75),
(104, 3, 4, 950.25),
(105, 2, 5, 2000.00),
(106, 1, 6, 700.00);



--ans qury:

CREATE VIEW TopSpendersView AS
SELECT u.username, f.order_total
FROM FoodOrder f
JOIN Users u
ON f.user_id = u.user_id
WHERE f.order_total > 1000;

--view execute
SELECT * FROM TopSpendersView;




-- Write a SQL query to list all users from the TopSpendersView who have spent more than 2000, sorted by order_total descending.Constraint: Only use the TopSpendersView for your query, not the original FoodOrder table.

SELECT *
FROM TopSpendersView
WHERE order_total > 2000
ORDER BY order_total DESC;




