-- All movies released in 2010 and their ratings, in descending order by rating. For movies with the same rating, order them alphabetically by title.

SELECT title FROM movies WHERE year = 2018 ORDER BY (SELECT rating FROM ratings)