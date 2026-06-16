<!DOCTYPE html>
<html>
<head>
    <title>Simple Shopping Site</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            text-align: center;
        }
        .product {
            border: 1px solid #ccc;
            padding: 20px;
            margin: 20px;
            display: inline-block;
        }
        button {
            background: green;
            color: white;
            border: none;
            padding: 10px 15px;
            cursor: pointer;
        }
    </style>
</head>
<body>

    <h1>My Shopping Store</h1>

    <div class="product">
        <h2>Product 1</h2>
        <p>Price: $20</p>
        <button onclick="addToCart('Product 1')">Add to Cart</button>
    </div>

    <div class="product">
        <h2>Product 2</h2>
        <p>Price: $35</p>
        <button onclick="addToCart('Product 2')">Add to Cart</button>
    </div>

    <h2>Cart</h2>
    <ul id="cart"></ul>

    <script>
        function addToCart(product) {
            let li = document.createElement("li");
            li.textContent = product;
            document.getElementById("cart").appendChild(li);
        }
    </script>

</body>
</html>
