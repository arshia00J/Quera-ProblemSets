-- Section1
SELECT id AS order_id
FROM orders
WHERE status = 'warehouse'
ORDER BY order_id DESC;

-- Section2
SELECT id AS customer_id, name AS customer_name
FROM customers
WHERE id NOT IN (SELECT customer_id FROM orders)
ORDER BY customer_name;

-- Section3
SELECT 
    a.created_at AS date, 
    FORMAT(100.0 * SUM(a.can) / SUM(a.comp), 2) AS cancellation_rate
FROM 
    (SELECT 
        created_at, 
        CASE WHEN T.status = T.status THEN 1 ELSE 0 END comp, 
        CASE WHEN T.status IN ('canceled') THEN 1 ELSE 0 END AS can
    FROM 
        orders T 
        JOIN customers U ON T.customer_id = U.id
    WHERE 
        U.is_blocked = 0 OR U.is_blocked IS NULL
    ) a
GROUP BY 
    a.created_at;
