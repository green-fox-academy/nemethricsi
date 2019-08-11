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
4 rows in set (0.00 sec)
```

### 2. Create a database

```SQL
mysql> CREATE DATABASE test3;
Query OK, 1 row affected (0.01 sec)

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
5 rows in set (0.00 sec)
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
1 row in set (0.01 sec)

mysql> SELECT DATABASE();
+------------+
| DATABASE() |
+------------+
| NULL       |
+------------+
1 row in set (0.00 sec)
```

### 4. DROP database
##### Deleting a database

```SQL
mysql> DROP DATABASE IF EXISTS test3;
Query OK, 0 rows affected (0.01 sec)

mysql> SHOW DATABASES;
+--------------------+
| Database           |
+--------------------+
| information_schema |
| mysql              |
| performance_schema |
| sys                |
+--------------------+
4 rows in set (0.00 sec)
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

    Query OK, 0 rows affected (0.03 sec)
```
```SQL
mysql> SHOW TABLES;
+-----------------+
| Tables_in_test3 |
+-----------------+
| student         |
+-----------------+
1 row in set (0.01 sec)
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
13 rows in set (0.01 sec)
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
Query OK, 1 row affected (0.00 sec)
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
10 rows in set (0.00 sec)
```
### 9. Insert more records in one step

```SQL
mysql> INSERT INTO class VALUES
    -> ("English", NULL), ("Speech", NULL), ("Literature", NULL),                                                                                                                 
    -> ("Algebra", NULL), ("Geometry", NULL), ("Trigonometry", NULL),
    -> ("Calculus", NULL), ("Earth Science", NULL), ("Biology", NULL),
    -> ("Chemistry", NULL), ("Physics", NULL), ("History", NULL),
    -> ("Art", NULL), ("Gym", NULL);
Query OK, 14 rows affected (0.01 sec)
Records: 14  Duplicates: 0  Warnings: 0
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
14 rows in set (0.00 sec)
```

### 10. PRIMARY KEY (event_id, student_id)
##### Create Primary key by concatenating two Foreign IDs.

```SQL
mysql> CREATE TABLE score(
    -> student_id INT UNSIGNED NOT NULL,
    -> event_id INT UNSIGNED NOT NULL,
    -> score INT NOT NULL,
    -> PRIMARY KEY(event_id, student_id));
Query OK, 0 rows affected (0.02 sec)
```

```SQL
mysql> CREATE TABLE absence(
    -> student_id INT UNSIGNED NOT NULL,
    -> date DATE NOT NULL,
    -> PRIMARY KEY(student_id, date));
Query OK, 0 rows affected (0.02 sec)
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
4 rows in set (0.01 sec)

mysql> ALTER TABLE test
    -> ADD maxscore INT NOT NULL AFTER type;
Query OK, 0 rows affected (0.03 sec)
Records: 0  Duplicates: 0  Warnings: 0

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
5 rows in set (0.01 sec)
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
3 rows in set (0.01 sec)

mysql> ALTER TABLE score CHANGE event_id test_id
    -> INT UNSIGNED NOT NULL;
Query OK, 0 rows affected (0.01 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> DESCRIBE score;
+------------+------------------+------+-----+---------+-------+
| Field      | Type             | Null | Key | Default | Extra |
+------------+------------------+------+-----+---------+-------+
| student_id | int(10) unsigned | NO   | PRI | NULL    |       |
| test_id    | int(10) unsigned | NO   | PRI | NULL    |       |
| score      | int(11)          | NO   |     | NULL    |       |
+------------+------------------+------+-----+---------+-------+
3 rows in set (0.01 sec)
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
10 rows in set (0.00 sec)
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
5 rows in set (0.00 sec)

mysql> RENAME TABLE
    -> absence to absences,
    -> class to classes,
    -> score to scores,
    -> student to students,
    -> test to tests;
Query OK, 0 rows affected (0.07 sec)

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
5 rows in set (0.01 sec)
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
2 rows in set (0.00 sec)

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
3 rows in set, 2 warnings (0.00 sec)

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
10 rows in set (0.00 sec)
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
10 rows in set (0.00 sec)
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
10 rows in set (0.04 sec)
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
5 rows in set (0.00 sec)
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
5 rows in set (0.00 sec)
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
10 rows in set (0.00 sec)
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
6 rows in set (0.00 sec)
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
2 rows in set (0.00 sec)
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
8 rows in set (0.00 sec)
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
1 row in set (0.00 sec)
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
1 row in set (0.00 sec)
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
2 rows in set (0.06 sec)
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
6 rows in set (0.05 sec)
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
2 rows in set (0.00 sec)
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
6 rows in set (0.01 sec)
```

### 25.
#####

```SQL

```
