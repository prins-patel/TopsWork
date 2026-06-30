-- Create a SQL query using GROUP BY to show the total number of orders placed by each user in an 'orders' table, displaying user_id and order_count.

-- Users Table
CREATE TABLE users (
    user_id INT PRIMARY KEY,
    username VARCHAR(50),
    email VARCHAR(100)
);

-- Orders Table
CREATE TABLE orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT,
    order_date DATE,
    total_amount DECIMAL(10,2),
    FOREIGN KEY (user_id) REFERENCES users(user_id)
);


-- Insert into Users table
INSERT INTO users (user_id, username, email)
VALUES
(1, 'prins', 'prins@gmail.com'),
(2, 'priya456', 'priya@gmail.com'),
(3, 'amit789', 'amit@gmail.com');


-- Insert into Orders table
INSERT INTO orders (user_id, order_date, total_amount)
VALUES
(1, '2026-06-01', 500.00),
(1, '2026-06-05', 750.00),
(2, '2026-06-03', 1200.00),
(2, '2026-06-10', 450.00),
(2, '2026-06-15', 300.00),
(3, '2026-06-08', 900.00);

-- answer query: 
    SELECT 
    user_id,
    COUNT(*) AS order_count
FROM orders
GROUP BY user_id;






-- Write a SQL query to display the names of restaurants from a 'restaurants' table that have received an average rating above 4.0, using GROUP BY and HAVING.

SELECT 
    name,
    AVG(rating) AS avg_rating
FROM restaurants
GROUP BY name
HAVING AVG(rating) > 4.0;




-- Suppose you have a 'payments' table with columns user_id, amount, and payment_date. Write a subquery to find user_ids who have made a single payment above ₹2000 in any transaction.

--A subquery to find users who have made at least one payment greater than ₹2000:

SELECT DISTINCT user_id
FROM orders
WHERE user_id IN (
    SELECT user_id
    FROM orders
    WHERE total_amount > 2000
);

--Or

--Without sub query

SELECT DISTINCT user_id
FROM orders
WHERE total_amount > 2000;




-- Using a nested subquery, display the names of movies from a 'movies' table that have a higher average rating than the overall average rating of all movies.Hint: Use a subquery to calculate the overall average rating, then compare each movie's average rating against it in the main query.

SELECT movie_name,
       AVG(rating) AS avg_rating
FROM movies
GROUP BY movie_name
HAVING AVG(rating) > (
    SELECT AVG(rating)
    FROM movies
);