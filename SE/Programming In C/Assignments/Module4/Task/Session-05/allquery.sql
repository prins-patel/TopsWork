-- Create two tables in SQL: influencers (with influencer_id as PRIMARY KEY and name) and posts (with post_id as PRIMARY KEY, influencer_id as FOREIGN KEY, and caption). Insert at least 3 influencers and 2 posts for each influencer.

-- Create Influencers Table
	   CREATE TABLE influencers (
	   influencer_id INT PRIMARY KEY,
    name VARCHAR(100)
);

-- Create Posts Table
CREATE TABLE posts (
    post_id INT PRIMARY KEY,
    influencer_id INT,
    caption VARCHAR(255),
    FOREIGN KEY (influencer_id) REFERENCES influencers(influencer_id)
);

-- Insert Influencers
INSERT INTO influencers (influencer_id, name)
VALUES
(1, 'Prins Patel'),
(2, 'Chenis Patel'),
(3, 'Amit Verma');

-- Insert Posts (2 posts for each influencer)
INSERT INTO posts (post_id, influencer_id, caption)
VALUES
(101, 1, 'Exploring the mountains today!'),
(102, 1, 'Travel is the best teacher.'),

(103, 2, 'Trying a new food recipe.'),
(104, 2, 'Delicious meals make happy days.'),

(105, 3, 'Latest tech gadget review.'),
(106, 3, 'Coding and coffee.');







-- Write an SQL query using INNER JOIN to display each post's caption along with the name of the influencer who posted it, based on the tables you created.

SELECT i.name AS influencer_name, p.caption
FROM influencers i
INNER JOIN posts p ON i.influencer_id = p.influencer_id;



-- Write an SQL query using LEFT JOIN to show all influencers and their posts, including influencers who haven't posted anything yet. If an influencer has no posts, display 'No Posts' in the caption column.Hint: Use IFNULL or COALESCE to handle NULL values in the result.
SELECT i.name AS influencer_name,
       COALESCE(p.caption, 'No Posts') AS caption
FROM influencers i
LEFT JOIN posts p
ON i.influencer_id = p.influencer_id;


-- Write an SQL query using RIGHT JOIN to list all posts and the corresponding influencer's name, ensuring that even posts without a matching influencer_id (if any) are shown.

SELECT 
    p.post_id,
    p.caption,
    IFNULL(i.name, 'No Influencer') AS influencer_name
FROM influencers i
RIGHT JOIN posts p
ON i.influencer_id = p.influencer_id;