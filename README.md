HTML (HyperText Markup Language) is the standard language to create webpages.

Structure of a basic HTML document:
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Page Title</title>
</head>
<body>

  <h1>Hello, World!</h1>
  <p>This is a paragraph.</p>

</body>
</html>

Common HTML Elements & Attributes
Element	Purpose	Common Attributes
<html>	Root element	lang (language)
<head>	Contains metadata	—
<title>	Page title in browser tab	—
<meta>	Metadata	charset, name, content
<body>	Page content	—
<h1> to <h6>	Headings (1 is largest)	—
<p>	Paragraph	—
<a>	Link	href (URL), target
<img>	Image	src (image URL), alt (alternative text), width, height
<div>	Block container	id, class
<span>	Inline container	id, class
<ul>	Unordered list	—
<ol>	Ordered list	—
<li>	List item	—
<input>	Form input	type, name, value, placeholder
<form>	Form container	action, method
<button>	Button	type, disabled
<table>	Table	—
<tr>	Table row	—
<td>	Table cell	colspan, rowspan
Example of usage with attributes:
<a href="https://www.example.com" target="_blank">Visit Example</a>

<img src="image.jpg" alt="A beautiful scene" width="300" height="200">

<input type="text" name="username" placeholder="Enter your username" />

<button type="submit">Submit</button>
