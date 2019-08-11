### TABLE OF CONTENTS


1. [Databases](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#1-show-all-the-databases-you-have)
5. [CREATE a Table](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#5-create-table)
6. [Show description of a table](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#6-describe-table)
7. [Insert record to a table](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#7-insert-into-table-values-)
8. [READ from a table](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#8-select--from-table)
10. [Primary Key](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#10-primary-key-event_id-student_id)
15. [WHERE](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#15-where)
20. [LIKE](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#20-like)
25. [DELETE](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#25-delete-a-record)
28. [UPDATE](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#28-update-a-record)
31. [JOIN](https://github.com/green-fox-academy/nemethricsi/blob/master/week-07/day-01/README.md#31-join)


### 0. Login to MYSQL in command line

`mysql -u root -p`

### 1. Show all the databases you have
```SQL
mysql> SHOW DATABASES;

+--------------------+
| Database           |
+--------------------+
| information_schema |
| mysql              |
| performance_schema |
| sys                |
+--------------------+
```

### 2. Create a database

```SQL
mysql> CREATE DATABASE test3;

mysql> SHOW DATABASES;
+--------------------+
| Database           |
+--------------------+
| information_schema |
| mysql              |
| performance_schema |
| sys                |
| test3              |
+--------------------+
```

### 3. USE & SELECT db
##### Using a database and checking which one your're currently using
If you don't use any it'll be `NULL`.

```SQL
mysql> USE test3;
Database changed

mysql> SELECT DATABASE();
+------------+
| DATABASE() |
+------------+
| test3      |
+------------+


mysql> SELECT DATABASE();
+------------+
| DATABASE() |
+------------+
| NULL       |
+------------+
```

### 4. DROP database
##### Deleting a database

```SQL
mysql> DROP DATABASE IF EXISTS test3;

mysql> SHOW DATABASES;
+--------------------+
| Database           |
+--------------------+
| information_schema |
| mysql              |
| performance_schema |
| sys                |
+--------------------+
```

### 5. CREATE TABLE
##### Creating a table in a database

```SQL
mysql> CREATE TABLE student(
    -> first_name VARCHAR(30) NOT NULL,
    -> last_name VARCHAR(30) NOT NULL,
    -> email VARCHAR(60) NULL,
    -> street VARCHAR(50) NOT NULL,
    -> city VARCHAR(40) NOT NULL,
    -> state CHAR(2) NOT NULL DEFAULT "PA",
    -> zip MEDIUMINT UNSIGNED NOT NULL,
    -> phone VARCHAR(20) NOT NULL,
    -> birth_date DATE NOT NULL,
    -> sex ENUM('M', 'F') NOT NULL,
    -> date_entered TIMESTAMP, #YYYYMMDDHHMMSS
    -> lunch_cost FLOAT NULL,
    -> student_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY);

```
```SQL
mysql> SHOW TABLES;
+-----------------+
| Tables_in_test3 |
+-----------------+
| student         |
+-----------------+
```

### 6. DESCRIBE table
##### Show description of your table

```SQL
mysql> DESCRIBE student;
+--------------+-----------------------+------+-----+---------+----------------+
| Field        | Type                  | Null | Key | Default | Extra          |
+--------------+-----------------------+------+-----+---------+----------------+
| first_name   | varchar(30)           | NO   |     | NULL    |                |
| last_name    | varchar(30)           | NO   |     | NULL    |                |
| email        | varchar(60)           | YES  |     | NULL    |                |
| street       | varchar(50)           | NO   |     | NULL    |                |
| city         | varchar(40)           | NO   |     | NULL    |                |
| state        | char(2)               | NO   |     | PA      |                |
| zip          | mediumint(8) unsigned | NO   |     | NULL    |                |
| phone        | varchar(20)           | NO   |     | NULL    |                |
| birth_date   | date                  | NO   |     | NULL    |                |
| sex          | enum('M','F')         | NO   |     | NULL    |                |
| date_entered | timestamp             | YES  |     | NULL    |                |
| lunch_cost   | float                 | YES  |     | NULL    |                |
| student_id   | int(10) unsigned      | NO   | PRI | NULL    | auto_increment |
+--------------+-----------------------+------+-----+---------+----------------+
```

### 7. INSERT INTO table VALUES ();
##### Add a record (row) to a table

```SQL
mysql> INSERT INTO student VALUES
    -> ("Dale", "Cooper", "dcooper@aol.com",
    -> "123 Main St",
    -> "Yakima",
    -> "WA",
    -> 98901,
    -> "792-112-8901",
    -> "1959-2-22",
    -> "M",
    -> NOW(),
    -> 3.50,
    -> NULL);
```
### 8. SELECT * FROM table;
##### Show all the data of a table

```SQL
mysql> SELECT * FROM student;
+------------+-----------+------------------+-----------------+--------------+-------+-------+--------------+------------+-----+---------------------+------------+------------+
| first_name | last_name | email            | street          | city         | state | zip   | phone        | birth_date | sex | date_entered        | lunch_cost | student_id |
+------------+-----------+------------------+-----------------+--------------+-------+-------+--------------+------------+-----+---------------------+------------+------------+
| Dale       | Cooper    | dcooper@aol.com  | 123 Main St     | Yakima       | WA    | 98901 | 792-112-8901 | 1959-02-22 | M   | 2019-08-11 00:32:06 |        3.5 |          1 |
| Harry      | Truman    | htruman@aol.com  | 202 South St    | Vancouver    | WA    | 98660 | 792-223-9810 | 1946-01-24 | M   | 2019-08-11 00:35:26 |        3.5 |          2 |
| Shelly     | Johnson   | sjohnson@aol.com | 9 Pond Rd       | Sparks       | NV    | 89431 | 792-223-6734 | 1970-12-12 | F   | 2019-08-11 00:37:26 |        3.5 |          3 |
| Bobby      | Briggs    | bbriggs@aol.com  | 14 12th St      | San Diego    | CA    | 92101 | 792-223-6178 | 1967-05-24 | M   | 2019-08-11 00:37:38 |        3.5 |          4 |
| Donna      | Hayward   | dhayward@aol.com | 120 16th St     | Davenport    | IA    | 52801 | 792-223-2001 | 1970-03-24 | F   | 2019-08-11 00:37:49 |        3.5 |          5 |
| Audrey     | Horne     | ahorne@aol.com   | 342 19th St     | Detroit      | MI    | 48222 | 792-223-2001 | 1965-02-01 | F   | 2019-08-11 00:37:59 |        3.5 |          6 |
| James      | Hurley    | jhurley@aol.com  | 2578 Cliff St   | Queens       | NY    | 11427 | 792-223-1890 | 1967-01-02 | M   | 2019-08-11 00:38:10 |        3.5 |          7 |
| Lucy       | Moran     | lmoran@aol.com   | 178 Dover St    | Hollywood    | CA    | 90078 | 792-223-9678 | 1954-11-27 | F   | 2019-08-11 00:38:17 |        3.5 |          8 |
| Tommy      | Hill      | thill@aol.com    | 672 High Plains | Tucson       | AZ    | 85701 | 792-223-1115 | 1951-12-21 | M   | 2019-08-11 00:38:24 |        3.5 |          9 |
| Andy       | Brennan   | abrennan@aol.com | 281 4th St      | Jacksonville | NC    | 28540 | 792-223-8902 | 1960-12-27 | M   | 2019-08-11 00:38:32 |        3.5 |         10 |
+------------+-----------+------------------+-----------------+--------------+-------+-------+--------------+------------+-----+---------------------+------------+------------+
```
### 9. Insert more records in one step

```SQL
mysql> INSERT INTO class VALUES
    -> ("English", NULL), ("Speech", NULL), ("Literature", NULL),                                                                                                                 
    -> ("Algebra", NULL), ("Geometry", NULL), ("Trigonometry", NULL),
    -> ("Calculus", NULL), ("Earth Science", NULL), ("Biology", NULL),
    -> ("Chemistry", NULL), ("Physics", NULL), ("History", NULL),
    -> ("Art", NULL), ("Gym", NULL);
```

```SQL
mysql> SELECT * FROM class;
+---------------+----------+
| name          | class_id |
+---------------+----------+
| English       |        1 |
| Speech        |        2 |
| Literature    |        3 |
| Algebra       |        4 |
| Geometry      |        5 |
| Trigonometry  |        6 |
| Calculus      |        7 |
| Earth Science |        8 |
| Biology       |        9 |
| Chemistry     |       10 |
| Physics       |       11 |
| History       |       12 |
| Art           |       13 |
| Gym           |       14 |
+---------------+----------+
```

### 10. PRIMARY KEY (event_id, student_id)
##### Create two primary keys

```SQL
mysql> CREATE TABLE score(
    -> student_id INT UNSIGNED NOT NULL,
    -> event_id INT UNSIGNED NOT NULL,
    -> score INT NOT NULL,
    -> PRIMARY KEY(event_id, student_id));
```

```SQL
mysql> CREATE TABLE absence(
    -> student_id INT UNSIGNED NOT NULL,
    -> date DATE NOT NULL,
    -> PRIMARY KEY(student_id, date));
```

### 11. Add a new column (field) to table
##### ALTER TABLE, AFTER

```SQL
mysql> DESCRIBE test;
+----------+------------------+------+-----+---------+----------------+
| Field    | Type             | Null | Key | Default | Extra          |
+----------+------------------+------+-----+---------+----------------+
| date     | date             | NO   |     | NULL    |                |
| type     | enum('T','Q')    | NO   |     | NULL    |                |
| class_id | int(10) unsigned | NO   |     | NULL    |                |
| test_id  | int(10) unsigned | NO   | PRI | NULL    | auto_increment |
+----------+------------------+------+-----+---------+----------------+


mysql> ALTER TABLE test
    -> ADD maxscore INT NOT NULL AFTER type;


mysql> DESCRIBE test;
+----------+------------------+------+-----+---------+----------------+
| Field    | Type             | Null | Key | Default | Extra          |
+----------+------------------+------+-----+---------+----------------+
| date     | date             | NO   |     | NULL    |                |
| type     | enum('T','Q')    | NO   |     | NULL    |                |
| maxscore | int(11)          | NO   |     | NULL    |                |
| class_id | int(10) unsigned | NO   |     | NULL    |                |
| test_id  | int(10) unsigned | NO   | PRI | NULL    | auto_increment |
+----------+------------------+------+-----+---------+----------------+
```

### 12. Change the name of a column (field)

```SQL
mysql> DESCRIBE score;
+------------+------------------+------+-----+---------+-------+
| Field      | Type             | Null | Key | Default | Extra |
+------------+------------------+------+-----+---------+-------+
| student_id | int(10) unsigned | NO   | PRI | NULL    |       |
| event_id   | int(10) unsigned | NO   | PRI | NULL    |       |
| score      | int(11)          | NO   |     | NULL    |       |
+------------+------------------+------+-----+---------+-------+


mysql> ALTER TABLE score CHANGE event_id test_id
    -> INT UNSIGNED NOT NULL;


mysql> DESCRIBE score;
+------------+------------------+------+-----+---------+-------+
| Field      | Type             | Null | Key | Default | Extra |
+------------+------------------+------+-----+---------+-------+
| student_id | int(10) unsigned | NO   | PRI | NULL    |       |
| test_id    | int(10) unsigned | NO   | PRI | NULL    |       |
| score      | int(11)          | NO   |     | NULL    |       |
+------------+------------------+------+-----+---------+-------+
```

### 13. Reading specific columns (fields) of data

```SQL
mysql> SELECT FIRST_NAME, last_name
    -> FROM student;
+------------+-----------+
| FIRST_NAME | last_name |
+------------+-----------+
| Dale       | Cooper    |
| Harry      | Truman    |
| Shelly     | Johnson   |
| Bobby      | Briggs    |
| Donna      | Hayward   |
| Audrey     | Horne     |
| James      | Hurley    |
| Lucy       | Moran     |
| Tommy      | Hill      |
| Andy       | Brennan   |
+------------+-----------+
```

### 14. RENAME TABLE

```SQL
mysql> SHOW TABLES;
+-----------------+
| Tables_in_test3 |
+-----------------+
| absence         |
| class           |
| score           |
| student         |
| test            |
+-----------------+

mysql> RENAME TABLE
    -> absence to absences,
    -> class to classes,
    -> score to scores,
    -> student to students,
    -> test to tests;

mysql> SHOW TABLES;
+-----------------+
| Tables_in_test3 |
+-----------------+
| absences        |
| classes         |
| scores          |
| students        |
| tests           |
+-----------------+
```

### 15. WHERE

```SQL
mysql> SELECT first_name, last_name, state
    -> FROM students
    -> WHERE state = "WA";
+------------+-----------+-------+
| first_name | last_name | state |
+------------+-----------+-------+
| Dale       | Cooper    | WA    |
| Harry      | Truman    | WA    |
+------------+-----------+-------+

mysql> SELECT first_name, last_name, birth_date
    -> FROM students
    -> WHERE YEAR(birth_date) >= 1965;
+------------+-----------+------------+
| first_name | last_name | birth_date |
+------------+-----------+------------+
| Shelly     | Johnson   | 1970-12-12 |
| Bobby      | Briggs    | 1967-05-24 |
| Donna      | Hayward   | 1970-03-24 |
| Audrey     | Horne     | 1965-02-01 |
| James      | Hurley    | 1967-01-02 |
+------------+-----------+------------+
5 rows in set (0.00 sec)
```

##### Using operators:

```SQL
mysql> SELECT last_name, state, birth_date
    -> FROM students
    -> WHERE DAY(birth_date) >= 12 && (state = "CA" || state = "NV");

+-----------+-------+------------+
| last_name | state | birth_date |
+-----------+-------+------------+
| Johnson   | NV    | 1970-12-12 |
| Briggs    | CA    | 1967-05-24 |
| Moran     | CA    | 1954-11-27 |
+-----------+-------+------------+

```

### 16. IS NULL / IS NOT NULL (~boolean)

```SQL
mysql> SELECT last_name
    -> FROM students
    -> WHERE last_name IS NOT NULL;
+-----------+
| last_name |
+-----------+
| Cooper    |
| Truman    |
| Johnson   |
| Briggs    |
| Hayward   |
| Horne     |
| Hurley    |
| Moran     |
| Hill      |
| Brennan   |
+-----------+
```

### 17. ORDER BY (ASC, DESC)

```SQL
mysql> SELECT first_name, last_name
    -> FROM students
    -> ORDER BY last_name DESC;
+------------+-----------+
| first_name | last_name |
+------------+-----------+
| Harry      | Truman    |
| Lucy       | Moran     |
| Shelly     | Johnson   |
| James      | Hurley    |
| Audrey     | Horne     |
| Tommy      | Hill      |
| Donna      | Hayward   |
| Dale       | Cooper    |
| Bobby      | Briggs    |
| Andy       | Brennan   |
+------------+-----------+
```

##### ordering by multiple columns

```SQL
mysql> SELECT first_name, last_name, state
    -> FROM students
    -> ORDER BY state DESC, last_name ASC; # first by state (descending) then by last name (ascending)
+------------+-----------+-------+
| first_name | last_name | state |
+------------+-----------+-------+
| Dale       | Cooper    | WA    |
| Harry      | Truman    | WA    |
| James      | Hurley    | NY    |
| Shelly     | Johnson   | NV    |
| Andy       | Brennan   | NC    |
| Audrey     | Horne     | MI    |
| Donna      | Hayward   | IA    |
| Bobby      | Briggs    | CA    |
| Lucy       | Moran     | CA    |
| Tommy      | Hill      | AZ    |
+------------+-----------+-------+
```

### 18. LIMIT
##### showing the first 5 matches:

```SQL
mysql> SELECT first_name, last_name FROM students LIMIT 5;
+------------+-----------+
| first_name | last_name |
+------------+-----------+
| Dale       | Cooper    |
| Harry      | Truman    |
| Shelly     | Johnson   |
| Bobby      | Briggs    |
| Donna      | Hayward   |
+------------+-----------+
```
##### showing the NEXT 5 matches

```SQL
mysql> SELECT first_name, last_name FROM students LIMIT 5, 10;
+------------+-----------+
| first_name | last_name |
+------------+-----------+
| Audrey     | Horne     |
| James      | Hurley    |
| Lucy       | Moran     |
| Tommy      | Hill      |
| Andy       | Brennan   |
+------------+-----------+
```

### 19. CONCAT

```SQL
mysql> SELECT CONCAT (first_name, " ", last_name) AS "Name",
    -> CONCAT (city, ", ", state) AS "Hometown"
    -> FROM students;
+----------------+------------------+
| Name           | Hometown         |
+----------------+------------------+
| Dale Cooper    | Yakima, WA       |
| Harry Truman   | Vancouver, WA    |
| Shelly Johnson | Sparks, NV       |
| Bobby Briggs   | San Diego, CA    |
| Donna Hayward  | Davenport, IA    |
| Audrey Horne   | Detroit, MI      |
| James Hurley   | Queens, NY       |
| Lucy Moran     | Hollywood, CA    |
| Tommy Hill     | Tucson, AZ       |
| Andy Brennan   | Jacksonville, NC |
+----------------+------------------+
```

### 20. LIKE
##### showing where first name starts with 'D' or last name ends with 'n'

```SQL
mysql> SELECT last_name, first_name
    -> FROM students
    -> WHERE first_name LIKE "D%" OR last_name LIKE "%n";
+-----------+------------+
| last_name | first_name |
+-----------+------------+
| Cooper    | Dale       |
| Truman    | Harry      |
| Johnson   | Shelly     |
| Hayward   | Donna      |
| Moran     | Lucy       |
| Brennan   | Andy       |
+-----------+------------+
```

### 21. LIKE '_ _ _ y'
##### Showing specific number of digits

```SQL
mysql> SELECT last_name, first_name
    -> FROM students
    -> WHERE first_name LIKE "___y"; # 4 digits where the last one is 'y'
+-----------+------------+
| last_name | first_name |
+-----------+------------+
| Moran     | Lucy       |
| Brennan   | Andy       |
+-----------+------------+
```

### 22. DISTINCT
##### Only showing a data once (filter duplicates)

```SQL
mysql> SELECT DISTINCT state
    -> FROM students
    -> ORDER BY state;
+-------+
| state |
+-------+
| AZ    |
| CA    |
| IA    |
| MI    |
| NC    |
| NV    |
| NY    |
| WA    |
+-------+
```

##### DISTINCT with COUNT

```SQL
mysql> SELECT COUNT(DISTINCT state)
    -> FROM students;
+-----------------------+
| COUNT(DISTINCT state) |
+-----------------------+
|                     8 | # students come from 8 states in total.
+-----------------------+
```

### 23. COUNT ( * )
##### Showing the number of records

```SQL
mysql> SELECT COUNT(*)
    -> FROM students;
+----------+
| COUNT(*) |
+----------+
|       10 |
+----------+
```

### 24. GROUP BY

```SQL
mysql> SELECT sex, COUNT(*)
    -> FROM students
    -> GROUP BY sex;
+-----+----------+
| sex | COUNT(*) |
+-----+----------+
| M   |        6 |
| F   |        4 |
+-----+----------+
```

```SQL
mysql> SELECT Month(birth_date) AS "Month", COUNT(*)
    -> FROM students
    -> GROUP BY Month
    -> ORDER BY Month;
+-------+----------+
| Month | COUNT(*) |
+-------+----------+
|     1 |        2 |
|     2 |        2 |
|     3 |        1 |
|     5 |        1 |
|    11 |        1 |
|    12 |        3 |
+-------+----------+
```

```SQL
mysql> SELECT state, COUNT(state) AS "Amount"
    -> FROM students
    -> GROUP BY state
    -> HAVING Amount > 1;
+-------+--------+
| state | Amount |
+-------+--------+
| WA    |      2 |
| CA    |      2 |
+-------+--------+
```

```SQL
mysql> SELECT
    -> test_id AS "Test",
    -> MIN(score) AS "min",
    -> MAX(score) AS "max",
    -> MAX(score)-MIN(score) AS "range",
    -> SUM(score) AS "total",
    -> AVG(score) AS "average"
    -> FROM scores
    -> GROUP BY test_id;
+------+------+------+-------+-------+---------+
| Test | min  | max  | range | total | average |
+------+------+------+-------+-------+---------+
|    1 |   13 |   15 |     2 |   143 | 14.3000 |
|    2 |   13 |   14 |     1 |   121 | 13.4444 |
|    3 |   18 |   28 |    10 |   228 | 25.3333 |
|    4 |   23 |   29 |     6 |   267 | 26.7000 |
|    5 |   12 |   15 |     3 |   134 | 13.4000 |
|    6 |   22 |   27 |     5 |   232 | 25.7778 |
+------+------+------+-------+-------+---------+
```

### 25. DELETE a record

```SQL
mysql>  SELECT * FROM absences;
+------------+------------+
| student_id | date       |
+------------+------------+
|          6 | 2014-08-29 |
|          7 | 2014-08-29 |
|          8 | 2014-08-27 |
+------------+------------+

mysql> DELETE FROM absences
    -> WHERE student_id = 6;

mysql>  SELECT * FROM absences;
+------------+------------+
| student_id | date       |
+------------+------------+
|          7 | 2014-08-29 |
|          8 | 2014-08-27 |
+------------+------------+
```

### 26. MODIFY a column

```SQL
mysql> DESCRIBE absences;
+------------+------------------+------+-----+---------+-------+
| Field      | Type             | Null | Key | Default | Extra |
+------------+------------------+------+-----+---------+-------+
| student_id | int(10) unsigned | NO   | PRI | NULL    |       |
| test_taken | char(1)          | NO   |     | F       |       |
| date       | date             | NO   | PRI | NULL    |       |
+------------+------------------+------+-----+---------+-------+

mysql> ALTER TABLE absences
    -> MODIFY COLUMN test_taken ENUM("T", "F") NOT NULL DEFAULT "F";

mysql> DESCRIBE absences;
+------------+------------------+------+-----+---------+-------+
| Field      | Type             | Null | Key | Default | Extra |
+------------+------------------+------+-----+---------+-------+
| student_id | int(10) unsigned | NO   | PRI | NULL    |       |
| test_taken | enum('T','F')    | NO   |     | F       |       |
| date       | date             | NO   | PRI | NULL    |       |
+------------+------------------+------+-----+---------+-------+
```

### 27. Deleting (DROP) a columns

```SQL
mysql> ALTER TABLE absences
    -> DROP COLUMN test_taken;


mysql> DESCRIBE absences;
+------------+------------------+------+-----+---------+-------+
| Field      | Type             | Null | Key | Default | Extra |
+------------+------------------+------+-----+---------+-------+
| student_id | int(10) unsigned | NO   | PRI | NULL    |       |
| date       | date             | NO   | PRI | NULL    |       |
+------------+------------------+------+-----+---------+-------+
```

### 28. UPDATE a record

```SQL
mysql> SELECT * FROM scores WHERE student_id = 4;
+------------+---------+-------+
| student_id | test_id | score |
+------------+---------+-------+
|          4 |       1 |    15 |
|          4 |       2 |    14 |
|          4 |       3 |    27 |
|          4 |       4 |    27 |
|          4 |       5 |    15 |
|          4 |       6 |    27 |
+------------+---------+-------+


mysql> UPDATE scores SET score = 25
    -> WHERE student_id = 4 AND test_id = 3;

mysql> SELECT * FROM scores WHERE student_id = 4;
+------------+---------+-------+
| student_id | test_id | score |
+------------+---------+-------+
|          4 |       1 |    15 |
|          4 |       2 |    14 |
|          4 |       3 |    25 |
|          4 |       4 |    27 |
|          4 |       5 |    15 |
|          4 |       6 |    27 |
+------------+---------+-------+
```

### 29. BETWEEN

```SQL
mysql> SELECT first_name, last_name, birth_date
    -> FROM students
    -> WHERE birth_date
    -> BETWEEN "1960-01-01" AND "1970-01-01";
+------------+-----------+------------+
| first_name | last_name | birth_date |
+------------+-----------+------------+
| Bobby      | Briggs    | 1967-05-24 |
| Audrey     | Horne     | 1965-02-01 |
| James      | Hurley    | 1967-01-02 |
| Andy       | Brennan   | 1960-12-27 |
+------------+-----------+------------+
```

### 30. IN
##### List when the db is includes the search term

```SQL
mysql> SELECT first_name, last_name
    -> FROM students
    -> WHERE first_name IN ("Bobby", "Lucy", "Andy");
+------------+-----------+
| first_name | last_name |
+------------+-----------+
| Bobby      | Briggs    |
| Lucy       | Moran     |
| Andy       | Brennan   |
+------------+-----------+
```

### 31. JOIN
##### Combine data from multiple different tables

```SQL
mysql> SELECT * FROM tests;
+------------+------+----------+----------+---------+
| date       | type | maxscore | class_id | test_id |
+------------+------+----------+----------+---------+
| 2014-08-25 | Q    |       15 |        1 |       1 |
| 2014-08-27 | Q    |       15 |        1 |       2 |
| 2014-08-29 | T    |       30 |        1 |       3 |
| 2014-08-29 | T    |       30 |        2 |       4 |
| 2014-08-27 | Q    |       15 |        4 |       5 |
| 2014-08-29 | T    |       30 |        4 |       6 |
+------------+------+----------+----------+---------+

mysql> SELECT * FROM scores;
+------------+---------+-------+
| student_id | test_id | score |
+------------+---------+-------+
|          1 |       1 |    15 |
|          2 |       1 |    15 |
|          3 |       1 |    14 |
|          4 |       1 |    15 |
|          5 |       1 |    14 |
................................
................................
................................
+------------+---------+-------+
```
##### Combining scores and tests tables based on the common `test_id`:

```SQL
mysql> SELECT scores.student_id, tests.date, scores.score, tests.maxscore
    -> FROM tests, scores
    -> WHERE date = "2014-08-25"
    -> AND tests.test_id = scores.test_id;
+------------+------------+-------+----------+
| student_id | date       | score | maxscore |
+------------+------------+-------+----------+
|          1 | 2014-08-25 |    15 |       15 |
|          2 | 2014-08-25 |    15 |       15 |
|          3 | 2014-08-25 |    14 |       15 |
|          4 | 2014-08-25 |    15 |       15 |
|          5 | 2014-08-25 |    14 |       15 |
|          6 | 2014-08-25 |    13 |       15 |
|          7 | 2014-08-25 |    13 |       15 |
|          8 | 2014-08-25 |    14 |       15 |
|          9 | 2014-08-25 |    15 |       15 |
|         10 | 2014-08-25 |    15 |       15 |
+------------+------------+-------+----------+
```

### 32. Combining 3 tables

```SQL
mysql> SELECT CONCAT(students.first_name, " ", students.last_name) AS "Name",
    -> tests.date, scores.score, tests.maxscore
    -> FROM tests, scores, students
    -> WHERE tests.date = "2014-08-25"
    -> AND tests.test_id = scores.test_id
    -> AND scores.student_id = students.student_id;
+----------------+------------+-------+----------+
| Name           | date       | score | maxscore |
+----------------+------------+-------+----------+
| Dale Cooper    | 2014-08-25 |    15 |       15 |
| Harry Truman   | 2014-08-25 |    15 |       15 |
| Shelly Johnson | 2014-08-25 |    14 |       15 |
| Bobby Briggs   | 2014-08-25 |    15 |       15 |
| Donna Hayward  | 2014-08-25 |    14 |       15 |
| Audrey Horne   | 2014-08-25 |    13 |       15 |
| James Hurley   | 2014-08-25 |    13 |       15 |
| Lucy Moran     | 2014-08-25 |    14 |       15 |
| Tommy Hill     | 2014-08-25 |    15 |       15 |
| Andy Brennan   | 2014-08-25 |    15 |       15 |
+----------------+------------+-------+----------+
```

##### other example:

```SQL
mysql> SELECT students.student_id,
    -> CONCAT(students.first_name, " ", students.last_name) AS "Name",
    -> COUNT(absences.date) AS "Absences"
    -> FROM students, absences
    -> WHERE students.student_id = absences.student_id
    -> GROUP BY students.student_id;

+------------+--------------+----------+
| student_id | Name         | Absences |
+------------+--------------+----------+
|          7 | James Hurley |        1 |
|          8 | Lucy Moran   |        1 |
+------------+--------------+----------+
```


### 33. LEFT JOIN
##### If we need to include all information from the table listed first "FROM students", even if it doesn't exist in the table on the right "LEFT JOIN absences", we can use a LEFT JOIN.

```SQL
mysql> SELECT students.student_id,
    -> CONCAT(students.first_name, " ", students.last_name) AS "Name",
    -> COUNT(absences.date) AS "Absences"

    -> FROM students LEFT JOIN absences

    -> ON students.student_id = absences.student_id
    -> GROUP BY students.student_id;
+------------+----------------+----------+
| student_id | Name           | Absences |
+------------+----------------+----------+
|          1 | Dale Cooper    |        0 |
|          2 | Harry Truman   |        0 |
|          3 | Shelly Johnson |        0 |
|          4 | Bobby Briggs   |        0 |
|          5 | Donna Hayward  |        0 |
|          6 | Audrey Horne   |        0 |
|          7 | James Hurley   |        1 |
|          8 | Lucy Moran     |        1 |
|          9 | Tommy Hill     |        0 |
|         10 | Andy Brennan   |        0 |
+------------+----------------+----------+
```


### 34. INNER JOIN
##### lists all the rows of data from the tables and put them together

```SQL
mysql> SELECT students.first_name,
    -> students.last_name.
    -> scores.test_id,
    -> scores.score
    -> FROM students
    -> INNER JOIN scores
    -> ON students.student_id = scores.student_id
    -> WHERE scores.score <= 15
    -> ORDER BY scores.test_id;

+------------+-----------+---------+-------+
| first_name | last_name | test_id | score |
+------------+-----------+---------+-------+
| Dale       | Cooper    |       1 |    15 |
| Harry      | Truman    |       1 |    15 |
| Shelly     | Johnson   |       1 |    14 |
| Bobby      | Briggs    |       1 |    15 |
| Donna      | Hayward   |       1 |    14 |
| Audrey     | Horne     |       1 |    13 |
| James      | Hurley    |       1 |    13 |
| Lucy       | Moran     |       1 |    14 |
| Tommy      | Hill      |       1 |    15 |
| Andy       | Brennan   |       1 |    15 |
| Dale       | Cooper    |       2 |    14 |
| Harry      | Truman    |       2 |    14 |
| Shelly     | Johnson   |       2 |    14 |
| Bobby      | Briggs    |       2 |    14 |
| Donna      | Hayward   |       2 |    13 |
| Audrey     | Horne     |       2 |    13 |
| James      | Hurley    |       2 |    13 |
| Tommy      | Hill      |       2 |    13 |
| Andy       | Brennan   |       2 |    13 |
| Dale       | Cooper    |       5 |    15 |
| Harry      | Truman    |       5 |    14 |
| Shelly     | Johnson   |       5 |    13 |
| Bobby      | Briggs    |       5 |    15 |
| Donna      | Hayward   |       5 |    13 |
| Audrey     | Horne     |       5 |    13 |
| James      | Hurley    |       5 |    13 |
| Lucy       | Moran     |       5 |    12 |
| Tommy      | Hill      |       5 |    14 |
| Andy       | Brennan   |       5 |    12 |
+------------+-----------+---------+-------+
```
