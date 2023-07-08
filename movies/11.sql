-- List the titles of the five highest rated movies (in order) that Chadwick Boseman starred in, starting with the highest rated

SELECT movies.title
FROM movies
    JOIN stars
    ON movies.id = stars.movie_id
    JOIN people
    ON movies.id = people.id
    JOIN ratings
    ON movies.id = ratings.movie_id
WHERE people.name = 'Chadwick Boseman'
ORDER BY ratings.rating DESC
LIMIT 5;









