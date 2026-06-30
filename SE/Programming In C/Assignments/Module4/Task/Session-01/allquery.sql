--Create a new database called InstaClone in MySQL Workbench, 
--then create a table named Users with columns: 
--user_id (INT, primary key), sername (VARCHAR), email (VARCHAR), and followers_count (INT).

--Create Database
CREATE DATABASE InstaClone;

--Create Users Table
CREATE TABLE Users (
    user_id INT PRIMARY KEY,
    username VARCHAR(50),
    email VARCHAR(100),
    followers_count INT
);


-- Insert 3 sample users into the Users table you created, using realistic Instagram-style usernames and follower counts.

INSERT INTO Users (user_id, username, email, followers_count)
VALUES
(1, 'prins', 'prins@gmail.com', 200),
(2, 'mahiman', 'mahiman@gmail.com', 850),
(3, 'ayan', 'ayan@gmail.com', 1500);

-- Create another table in the InstaClone database called Posts with columns: post_id (INT, primary key), user_id (INT), caption (VARCHAR), and post_date (DATE). Add a foreign key from Posts.user_id to Users.user_id to establish a relationship.

CREATE TABLE Posts (
    post_id INT PRIMARY KEY,
    caption VARCHAR(255),
    post_date DATE,
    user_id INT,
    FOREIGN KEY (user_id) REFERENCES Users(user_id)
);


