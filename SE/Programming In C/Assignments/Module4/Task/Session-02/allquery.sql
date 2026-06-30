-- Open MySQL Workbench or CLI and write a CREATE TABLE statement to create a table called 'restaurants' with columns: id (INT, primary key, auto-increment), name (VARCHAR(100)), location (VARCHAR(100)), and rating (DECIMAL(2,1)).


CREATE TABLE restaurants (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100),
    location VARCHAR(100),
    rating DECIMAL(2,1)
);

-- Use the ALTER TABLE command in MySQL to add a new column 'average_cost' (INT) to your 'restaurants' table.Hint:Remember to specify the data type when adding a new column.


ALTER TABLE restaurants
ADD average_cost INT;


-- Write a SQL statement to DROP the 'restaurants' table you created earlier. Double-check your command before running it to avoid accidental data loss.

DROP TABLE restaurants;


-- Create a new table called 'playlists' for a music app like Spotify, with columns: playlist_id (INT, primary key, auto-increment), title (VARCHAR(50)), created_by (VARCHAR(50)), and created_at (DATE).


CREATE TABLE playlists(
    playlist_id INT AUTO_INCREMENT PRIMARY KEY,
    title VARCHAR(50),
    created_by VARCHAR(50),
    created_at DATE
);


--Create a new database called InstaClone in MySQL Workbench, 
--then create a table named Users with columns: user_id 
--(INT, primary key), sername (VARCHAR), email (VARCHAR), and followers_count (INT).


--Create Database
CREATE DATABASE InstaClone;

--Create Users Table
CREATE TABLE Users (
    user_id INT PRIMARY KEY,
    username VARCHAR(50),
    email VARCHAR(100),
    followers_count INT
);
