-- Create a table called Playlist with columns: id, song_name, artist, genre, and play_count. Insert at least 5 sample records representing your favorite songs from Spotify.

-- Create Playlist Table
CREATE TABLE Playlist (
    id INT AUTO_INCREMENT PRIMARY KEY,
    song_name VARCHAR(100),
    artist VARCHAR(100),
    genre VARCHAR(50),
    play_count INT
);


-- Insert Records
INSERT INTO Playlist (song_name, artist, genre, play_count)
VALUES
('Blinding Lights', 'The Weeknd', 'Pop', 1250),
('Shape of You', 'Ed Sheeran', 'Pop', 980),
('Believer', 'Imagine Dragons', 'Rock', 870),
('Kesariya', 'Arijit Singh', 'Bollywood', 760),
('Perfect', 'Ed Sheeran', 'Pop', 1100);





-- Write a SELECT query to display only the song_name and artist from the Playlist table, but show the artist column as 'Singer' using an alias.

SELECT song_name, artist AS Singer
FROM Playlist;



-- Write a SELECT query to find all songs in the Playlist table where the genre is 'Pop' and play_count is greater than 100. Sort the results by play_count in descending order.

SELECT *
FROM Playlist
WHERE genre = 'Pop'
  AND play_count > 100
ORDER BY play_count DESC;




-- Use the COUNT aggregate function to find out how many songs in your Playlist table belong to the genre 'Hip-Hop'.

SELECT COUNT(*) AS bollywood_song_count
FROM Playlist
WHERE genre = 'Bollywood';


-- Write a SELECT query that shows the total number of plays (SUM of play_count) for each genre in your Playlist table, grouped by genre.Hint: Use GROUP BY with the SUM function to aggregate play counts by genre.

SELECT genre,
       SUM(play_count) AS total_plays
FROM Playlist
GROUP BY genre;